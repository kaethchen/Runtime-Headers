@class NSString, MLE5InputPortBinder, MLPixelBufferPool;

@interface MLE5InputPort : NSObject <MLE5IOPort>

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (retain) MLE5InputPortBinder *binder;
@property (readonly, nonatomic) BOOL boundFeatureDirectly;
@property (readonly) NSString *name;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)copyFeatureValue:(id)a0 error:(id *)a1;
- (id)initWithPortHandle:(struct e5rt_io_port { } *)a0 name:(id)a1 featureDescription:(id)a2;
- (BOOL)prepareForFeatureValue:(id)a0 error:(id *)a1;
- (BOOL)reusableForFeatureValue:(id)a0 willBindDirectly:(BOOL *)a1;

@end
