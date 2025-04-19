@class NSMutableArray;

@interface _MLTPerfTimeTracer : NSObject <_MLTPerfTracerProtocol>

@property (nonatomic) unsigned long long sampleStartTime;
@property (nonatomic) BOOL inMeasurement;
@property (retain, nonatomic) NSMutableArray *values;

- (id)init;
- (void).cxx_destruct;
- (id)measurements;
- (BOOL)startSampling:(id *)a0;
- (BOOL)stopSampling:(id *)a0;

@end
