@class SHSignatureGenerator, SHSignature, AVAudioFormat;

@interface SHSignatureBuffer : NSObject

@property double maximumSignatureDuration;
@property double minimumSignatureDuration;
@property double minimumMusicalFeaturesDuration;
@property double bufferMaxSize;
@property long long clipStyle;
@property (retain) SHSignatureGenerator *signatureGenerator;
@property (retain) SHSignature *currentSignature;
@property (retain) AVAudioFormat *format;
@property double signatureOffset;
@property (readonly) double currentSignatureDuration;
@property BOOL shouldGenerateSpectralOutput;

- (void).cxx_destruct;
- (void)reset;
- (double)duration;
- (void)discardSignatureWithID:(id)a0;
- (void)flow:(id)a0 time:(id)a1;
- (id)generateCurrentSignature;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2 musicalFeaturesConfiguration:(id)a3;
- (id)initWithMinimumSignatureDuration:(double)a0 maximumSignatureDuration:(double)a1 bufferDuration:(double)a2 signatureGenerator:(id)a3;

@end
