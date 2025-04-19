@class NSString, SHSigX;

@interface SHSpectralPeakFeaturesExtractor : NSObject <SHSignatureExtractor, SHSpectralOutputProvider>

@property (readonly) SHSigX *sigX;
@property (readonly) long long clipStyle;
@property (readonly) double sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (int)signatureType;
- (void)disableSpectralOutput;
- (void)enableSpectralOutputWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)flowBuffer:(id)a0 error:(id *)a1;
- (id)initWithClipStype:(long long)a0 maximumSeconds:(double)a1 sampleRate:(double)a2 error:(id *)a3;
- (BOOL)setRollingBufferSeconds:(float)a0 error:(id *)a1;
- (id)signatureWithError:(id *)a0;

@end
