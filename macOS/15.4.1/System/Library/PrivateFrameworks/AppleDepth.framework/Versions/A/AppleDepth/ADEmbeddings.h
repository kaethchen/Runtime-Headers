@interface ADEmbeddings : NSObject {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _trigFactors;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _valuesFactor;
}

@property (nonatomic) int targetStorageType;

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)outputChannelsForDepthEmbedding;
- (long long)embedCentersUsingFourierEncoding:(SEL)a0 outputBuffer:(id)a1 outputChannelOffset:(unsigned long long)a2 outputBatchOffset:(unsigned long long)a3;
- (long long)embedDepthMapUsingFourierEncoding:(struct __CVBuffer { } *)a0 outputBuffer:(id)a1 outputChannelOffset:(unsigned long long)a2 outputBatchOffset:(unsigned long long)a3;
- (long long)embedRaysUsingFourierEncoding:(const void *)a0 outputBuffer:(id)a1 outputChannelOffset:(unsigned long long)a2 outputBatchOffset:(unsigned long long)a3;
- (long long)embedValuesUsingFourierEncoding:(const void *)a0 outputBuffer:(void *)a1 dimensions:(id)a2 strides:(id)a3 offsets:(id)a4;
- (long long)embedValuesUsingFourierEncoding:(const void *)a0 outputBuffer:(id)a1 outputChannelOffset:(unsigned long long)a2 outputBatchOffset:(unsigned long long)a3;
- (id)initWithBands:(unsigned int)a0 maxResolution:(float)a1 sourceFactor:(float)a2;
- (id)initWithFrequencies:(const void *)a0 sourceFactor:(float)a1;
- (unsigned int)outputChannelsForValuesEmbedding;

@end
