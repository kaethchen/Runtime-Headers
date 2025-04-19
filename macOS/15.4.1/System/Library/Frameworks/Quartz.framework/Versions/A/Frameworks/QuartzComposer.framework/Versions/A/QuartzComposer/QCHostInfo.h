@class NSObject, QCStructurePort, QCIndexPort, QCStringPort, QCNumberPort;
@protocol OS_dispatch_queue;

@interface QCHostInfo : QCPatch {
    QCStringPort *outputUserName;
    QCStringPort *outputLongUserName;
    QCStringPort *outputComputerName;
    QCStringPort *outputHostName;
    QCStringPort *outputIPAddress;
    QCStringPort *outputMachineName;
    QCStringPort *outputOSVersion;
    QCStringPort *outputKernelVersion;
    QCIndexPort *outputRAMSize;
    QCStringPort *outputCPUType;
    QCStructurePort *_cpuLoadPort;
    QCIndexPort *_CPUCountPort;
    QCNumberPort *_CPULoadPort_1;
    QCNumberPort *_CPULoadPort_2;
    struct processor_cpu_load_info { unsigned int x0[4]; } *_savedTicks;
    unsigned int _savedSize;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)useCPUStructure;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setUseCPUStructure:(BOOL)a0;

@end
