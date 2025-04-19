@interface CSAudioSpectralMeter : NSObject {
    struct unique_ptr<CSAudioSpectralMeterImpl, std::default_delete<CSAudioSpectralMeterImpl>> { struct __compressed_pair<CSAudioSpectralMeterImpl *, std::default_delete<CSAudioSpectralMeterImpl>> { struct CSAudioSpectralMeterImpl *__value_; } __ptr_; } _spectralMeterImpl;
}

@property (nonatomic) BOOL enable;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)processAudioChunk:(id)a0;
- (id)getFrequencyMagnitudesResult;
- (id)initWithSampleRate:(float)a0 windowSize:(unsigned long long)a1;
- (void)setOutputFrequencyBandsInHz:(id)a0;

@end
