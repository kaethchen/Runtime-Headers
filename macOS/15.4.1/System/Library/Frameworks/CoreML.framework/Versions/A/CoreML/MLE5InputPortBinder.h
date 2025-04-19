@class NSString, MLPixelBufferPool, MLFeatureValue, MLFeatureDescription;

@interface MLE5InputPortBinder : NSObject <MLE5PortBinder> {
    struct __CVBuffer { } *_temporarilyBoundPixelBuffer;
}

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (readonly) MLFeatureDescription *featureDescription;
@property (retain, nonatomic) MLFeatureValue *directlyBoundFeatureValue;
@property (nonatomic) unsigned char bindingMode;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_reusableForFeatureValue:(id)a0 directMode:(unsigned char)a1;
- (BOOL)bindMemoryObjectForFeatureValue:(id)a0 error:(id *)a1;
- (BOOL)copyFeatureValue:(id)a0 error:(id *)a1;
- (id)initWithPort:(struct e5rt_io_port { } *)a0 featureDescription:(id)a1;
- (BOOL)reusableForFeatureValue:(id)a0 willBindDirectly:(BOOL *)a1;

@end
