@interface CSAudioZeroFilter : NSObject {
    struct unique_ptr<CSAudioZeroFilterImpl<float>, std::default_delete<CSAudioZeroFilterImpl<float>>> { struct __compressed_pair<CSAudioZeroFilterImpl<float> *, std::default_delete<CSAudioZeroFilterImpl<float>>> { void *__value_; } __ptr_; } _audioZeroFilterImpl;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)metrics;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)a0;
- (unsigned long long)filterZerosInAudioPacket:(id)a0 atBufferHostTime:(unsigned long long)a1 filteredPacket:(id *)a2;
- (id)initWithZeroWindowSize:(unsigned long long)a0 approxAbsSpeechThreshold:(float)a1 numHostTicksPerAudioSample:(double)a2;

@end
