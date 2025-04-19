@class NSMutableArray;

@interface _MLTPerfEnergyTracer : NSObject <_MLTPerfTracerProtocol>

@property (nonatomic) int pid;
@property (nonatomic) BOOL inMeasurement;
@property (nonatomic) unsigned long long sampleStartCPUCycles;
@property (retain, nonatomic) NSMutableArray *values;

- (id)init;
- (void).cxx_destruct;
- (id)measurements;
- (BOOL)startSampling:(id *)a0;
- (BOOL)stopSampling:(id *)a0;

@end
