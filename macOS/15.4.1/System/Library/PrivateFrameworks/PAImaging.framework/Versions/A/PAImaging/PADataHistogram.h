@class NSArray;

@interface PADataHistogram : PAHistogram {
    NSArray *_channelData;
}

- (void).cxx_destruct;
- (unsigned long long)_channelByteLength;
- (id)_dataForChannel:(unsigned long long)a0;
- (id)initWithNumberOfChannels:(unsigned int)a0 numberOfSamples:(unsigned long long)a1 parameters:(id)a2;
- (void)readChannelData:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (void)readDataWithBlock:(id /* block */)a0;
- (void)writeChannelData:(unsigned long long)a0 withBlock:(id /* block */)a1;

@end
