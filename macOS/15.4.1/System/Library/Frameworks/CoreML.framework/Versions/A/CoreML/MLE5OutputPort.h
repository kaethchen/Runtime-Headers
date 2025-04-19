@class MLE5OutputPortBinder, NSString, MLPixelBufferPool, MLFeatureValue, MLFeatureDescription;

@interface MLE5OutputPort : NSObject <MLE5IOPort>

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (readonly) MLFeatureDescription *featureDescription;
@property (retain) MLE5OutputPortBinder *binder;
@property (readonly, nonatomic) BOOL outputBackingWasDirectlyBound;
@property (readonly, nonatomic) BOOL boundFeatureDirectly;
@property (readonly) MLFeatureValue *featureValue;
@property (readonly) NSString *name;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPortHandle:(struct e5rt_io_port { } *)a0 name:(id)a1 featureDescription:(id)a2;
- (BOOL)prepareWithOptions:(id)a0 error:(id *)a1;
- (BOOL)reusableForOutputBacking:(id)a0 willBindDirectly:(BOOL *)a1;

@end
