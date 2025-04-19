@interface SHSigX : NSObject

@property (nonatomic) struct sigx_pipe_base { void /* function */ **x0; } *pipeline;
@property (copy) id /* block */ spectralOutputHandler;

+ (id)version;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)resetWithError:(id *)a0;
- (BOOL)ConvertSigXErrorCode:(id *)a0 code:(int)a1;
- (void)disableSpectralOutput;
- (void)enableSpectralOutputForNumberOfFrequencyBins:(int)a0 callbackFrequency:(int)a1 completionHandler:(id /* block */)a2;
- (BOOL)flowBuffer:(id)a0 error:(id *)a1;
- (BOOL)flowFloatSamples:(float *)a0 sampleCount:(int)a1 channels:(int)a2 error:(id *)a3;
- (BOOL)flowFloatSamples:(float *)a0 sampleCount:(int)a1 error:(id *)a2;
- (BOOL)flowIntSamples:(short *)a0 sampleCount:(int)a1 channels:(int)a2 error:(id *)a3;
- (BOOL)flowIntSamples:(const short *)a0 sampleCount:(int)a1 error:(id *)a2;
- (id)initWithSignatureType:(int)a0 sampleRate:(unsigned int)a1 error:(id *)a2;
- (id)initWithSignatureType:(int)a0 sampleRate:(unsigned int)a1 signatureOptions:(int)a2 error:(id *)a3;
- (BOOL)setRollingBufferSeconds:(float)a0 error:(id *)a1;
- (id)signatureWithError:(id *)a0;

@end
