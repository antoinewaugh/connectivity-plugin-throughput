//
// Created by antoine on 24/08/17.
//

#include "SampleEvent.h"

int SampleEvent::getA() const {
    return a;
}

void SampleEvent::setA(int a) {
    SampleEvent::a = a;
}

int SampleEvent::getB() const {
    return b;
}

void SampleEvent::setB(int b) {
    SampleEvent::b = b;
}

SampleEvent::SampleEvent(int a, int b) : a(a), b(b) {}
