@class NSString, ADMonocularV2Executor;

@interface ADMonocularV2Flow : ADFlow <ADFlowColorConsumer>

@property (readonly, retain, nonatomic) ADMonocularV2Executor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExecutor:(id)a0;
- (void)processColor:(struct __CVBuffer { } *)a0 timestamp:(double)a1;
- (void)pushColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 metadata:(id)a3 timestamp:(double)a4;
- (void)pushColor:(struct __CVBuffer { } *)a0 timestamp:(double)a1;

@end
