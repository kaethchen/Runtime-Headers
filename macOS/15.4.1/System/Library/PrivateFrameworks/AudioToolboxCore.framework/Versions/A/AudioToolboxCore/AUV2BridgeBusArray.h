@interface AUV2BridgeBusArray : AUAudioUnitBusArray

- (id)initWithOwner:(id)a0 scope:(unsigned int)a1;
- (BOOL)isCountChangeable;
- (BOOL)setBusCount:(unsigned long long)a0 error:(id *)a1;

@end
