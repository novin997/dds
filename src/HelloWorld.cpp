// Your First C++ Program

#include <iostream>

#include <dds/DCPS/Service_Participant.h>
#include <dds/DCPS/Marked_Default_Qos.h>

int main(int argc, char *argv[])
{
    std::cout << "Hello World!" << std::endl;

    DDS::DomainParticipantFactory_var dpf =
        TheParticipantFactoryWithArgs(argc, argv);
    DDS::DomainParticipant_var participant =
        dpf->create_participant(42, // Domain ID
                                PARTICIPANT_QOS_DEFAULT,
                                0, // No listener required
                                OpenDDS::DCPS::DEFAULT_STATUS_MASK);
    if (!participant)
    {
        std::cerr << "create_participant failed." << std::endl;
        return 1;
    }

    while (1)
    {
    }
    return 0;
}