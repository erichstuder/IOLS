#pragma once

#include "Administration.h"
#include "ITransitions.h"
#include "PL_Transfer.h"
#include "Behavioral_description.h"

namespace State_machine_of_the_Device_message_handler {
	class States {
		public:
			enum class Guard {
				NoGuard,
				Completed,
				No_error,
				ChecksumError,
				TypeError_and_not_ChecksumError,
				Ready
			};

			class State: public PL_Transfer, public Behavioral_description {
				public:
					State(States* states, ITransitions* transitions, Administration* administration):
						states(states),
						transitions(transitions),
						administration(administration){}

					virtual void tick(Guard guard) { (void)guard; };

					void tm_event() override {};

					void MH_Conf_ACTIVE();
					void MH_Conf_INACTIVE();

					void PL_Transfer_req(uint8_t Data) override;
					Status PL_Transfer_ind(uint8_t Data) override;
				protected:
					States* states;
					ITransitions* transitions;
					Administration* administration;
			};

			State* const Inactive_0;
			State* const Idle_1;
			State* const GetMessage_2;
			State* const CheckMessage_3;
			State* const CreateMessage_4;
			const float MaxCycleTime_ms = 42.8; //TODO: don't understand yet how to set this time. see Specification and maybe also 10.8.3
			const float MaxUARTframeTime = 88.9; //TODO: don't understand yet how to set this time. see Specification and maybe also 10.8.3

			States(Administration* administration, ITransitions* transitions);

			State* state;
	};
}
