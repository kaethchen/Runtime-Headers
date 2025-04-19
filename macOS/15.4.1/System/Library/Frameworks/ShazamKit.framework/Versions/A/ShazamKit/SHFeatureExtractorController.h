@class NSString;
@protocol SHSpectralOutputProvider, SHSignatureExtractor;

@interface SHFeatureExtractorController : NSObject <SHSignatureExtractor, SHSpectralOutputProvider>

@property (retain) id<SHSignatureExtractor, SHSpectralOutputProvider> spectralPeaksExtractor;
@property (retain) id<SHSignatureExtractor> musicalFeaturesExtractor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)coalescePeaksFeatures:(id)a0 musicalFeatures:(id)a1 error:(id *)a2;
- (BOOL)configureMusicalFeaturesExtractorWithConfiguration:(id)a0 sampleRate:(double)a1 error:(id *)a2;
- (BOOL)configureSpectralPeaksExtractorWithClipStype:(long long)a0 maximumSeconds:(double)a1 sampleRate:(double)a2 error:(id *)a3;
- (void)disableSpectralOutput;
- (void)enableSpectralOutputWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)flowBuffer:(id)a0 error:(id *)a1;
- (BOOL)flowBuffer:(id)a0 throughExtractor:(id)a1 error:(id *)a2;
- (BOOL)setRollingBufferSeconds:(float)a0 error:(id *)a1;
- (id)signatureDataForExtractor:(id)a0 error:(id *)a1;
- (id)signatureWithError:(id *)a0;

@end
