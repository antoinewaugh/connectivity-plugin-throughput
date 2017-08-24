//
// Created by antoine on 24/08/17.
//

#ifndef CONNECTIVITY_PLUGIN_THROUGHPUT_SAMPLEEVENT_H
#define CONNECTIVITY_PLUGIN_THROUGHPUT_SAMPLEEVENT_H

class SampleEvent {
public:

    SampleEvent(int a, int b);

    int getA() const;

    void setA(int a);

    int getB() const;

    void setB(int b);

private:
    int a;
    int b;
};


#endif //CONNECTIVITY_PLUGIN_THROUGHPUT_SAMPLEEVENT_H
