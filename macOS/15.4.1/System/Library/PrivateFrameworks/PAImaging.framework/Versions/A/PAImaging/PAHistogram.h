@class PAHistogramParameters;

@interface PAHistogram : NSObject

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int numberOfChannels;
@property (readonly, nonatomic) unsigned long long numberOfSamples;
@property (readonly, nonatomic) PAHistogramParameters *parameters;

- (id)init;
- (void).cxx_destruct;
- (id)compatibilityHistogramData;
- (id)initWithNumberOfChannels:(unsigned int)a0 numberOfSamples:(unsigned long long)a1;
- (id)initWithNumberOfChannels:(unsigned int)a0 numberOfSamples:(unsigned long long)a1 parameters:(id)a2;
- (void)packChannelData:(unsigned long long)a0 withOpenGLBlock:(id /* block */)a1 context:(id)a2;
- (void)readChannelData:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)readDataWithBlock:(id /* block */)a0;
- (void)unpackChannelData:(unsigned long long)a0 withOpenGLBlock:(id /* block */)a1 context:(id)a2;
- (void)writeChannelData:(unsigned long long)a0 withBlock:(id /* block */)a1;

@end
