//
// Created by antoine on 24/08/17.
//

#include "catch.hpp"
#include "sag_connectivity_cpp.hpp"

#include "SampleEvent.h"

using com::softwareag::connectivity::data_t;
using com::softwareag::connectivity::map_t;
using com::softwareag::connectivity::get;
using com::softwareag::connectivity::MapHelper;

SCENARIO("A message can be converted to object and visa versa") {

   GIVEN("A valid apama message") {

      com::softwareag::connectivity::map_t payload;

      payload.insert(data_t("a"), data_t(int64_t(1)));
      payload.insert(data_t("b"), data_t(int64_t(2)));

      SampleEvent se(1,2);
      REQUIRE(MapHelper::getInteger(payload, "a") == se.getA());
      REQUIRE(MapHelper::getInteger(payload, "b") == se.getB());

       com::softwareag::connectivity::Message m(data_t(std::move(payload)));
   }
}


