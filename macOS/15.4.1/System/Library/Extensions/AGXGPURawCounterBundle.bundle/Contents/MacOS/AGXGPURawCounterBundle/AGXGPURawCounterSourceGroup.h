@interface AGXGPURawCounterSourceGroup : _GPURawCounterSourceGroup {
    struct AGXGPURawCounter { void /* function */ **x0; } *_impl;
}

- (void)dealloc;
- (void)setOptions:(id)a0;
- (id)initWithAcceleratorPort:(unsigned int)a0;
- (unsigned long long)sampleMarker;
- (BOOL)startSampling;
- (BOOL)stopSampling;
- (id)subDivideCounterList:(id)a0 withOptions:(id)a1;

@end
