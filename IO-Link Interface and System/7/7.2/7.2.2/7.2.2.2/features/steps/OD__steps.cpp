#include <gtest/gtest.h>
#include <cucumber-cpp/autodetect.hpp>

#include "OD.h"

using std::string;

OD OD;

THEN("^\\.req has Argument: yes") {
	OD::Argument_type Argument;
	OD.req(Argument);
}

THEN("^\\.ind has Argument: yes") {
	OD::Argument_type Argument;
	OD.ind(Argument);
}

THEN("^\\.rsp has Argument: no") {
	OD.rsp();
}

THEN("^\\.cnf has Argument: no") {
	OD.cnf();
}

THEN("^\\.req has Result: no$") {
	//TODO: any idea to test for a void return value?
}

THEN("^\\.ind has Result: no$") {
	//TODO: any idea to test for a void return value?
}

THEN("^\\.rsp has Result: yes$") {
	OD::Result_type dummy = OD.rsp();
	(void)dummy;
}

THEN("^\\.cnf has Result: yes$") {
	OD::Result_type dummy = OD.cnf();
	(void)dummy;
}

GIVEN("^RWDirection is in the range \\{READ, WRITE\\}$") {
	EXPECT_TRUE((int)OD::RWDirection_type::READ >= 0);
	EXPECT_TRUE((int)OD::RWDirection_type::WRITE >= 0);
	EXPECT_EQ((int)OD::RWDirection_type::_cnt, 2);
}

GIVEN("^ComChannel is in the range \\{DIAGNOSIS, PAGE, ISDU\\}$") {
	EXPECT_TRUE((int)OD::ComChannel_type::DIAGNOSIS >= 0);
	EXPECT_TRUE((int)OD::ComChannel_type::PAGE >= 0);
	EXPECT_TRUE((int)OD::ComChannel_type::ISDU >= 0);
	EXPECT_EQ((int)OD::ComChannel_type::_cnt, 3);
}

GIVEN("^AddressCtrl is in the range \\{0..31\\}$") {
	EXPECT_TRUE((int)OD::AddressCtrl_type::_0 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_1 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_2 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_3 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_4 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_5 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_6 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_7 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_8 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_9 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_10 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_11 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_12 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_13 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_14 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_15 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_16 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_17 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_18 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_19 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_20 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_21 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_22 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_23 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_24 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_25 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_26 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_27 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_28 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_29 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_30 >= 0);
	EXPECT_TRUE((int)OD::AddressCtrl_type::_31 >= 0);
	EXPECT_EQ((int)OD::AddressCtrl_type::_cnt, 32);
}

GIVEN("^Length is in the range \\{0..32\\}$") {
	EXPECT_TRUE((int)OD::Length_type::_0 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_1 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_2 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_3 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_4 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_5 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_6 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_7 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_8 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_9 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_10 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_11 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_12 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_13 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_14 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_15 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_16 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_17 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_18 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_19 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_20 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_21 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_22 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_23 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_24 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_25 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_26 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_27 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_28 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_29 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_30 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_31 >= 0);
	EXPECT_TRUE((int)OD::Length_type::_32 >= 0);
	EXPECT_EQ((int)OD::Length_type::_cnt, 33);
}

GIVEN("^Data is of type Octet string$") {
	OD::Argument_type Argument;
	Argument.Data = new OctetStringT(23);
	(void)Argument;
}

GIVEN("^the Argument is passable range$") {
	OD::Argument_type Argument;
	Argument.RWDirection = OD::RWDirection_type::READ;
	Argument.ComChannel = OD::ComChannel_type::DIAGNOSIS;
	Argument.AddressCtrl = OD::AddressCtrl_type::_17;
	Argument.Length = OD::Length_type::_32;
	Argument.Data = new OctetStringT(23);

	OD.req(Argument);
	OD.ind(Argument);
}