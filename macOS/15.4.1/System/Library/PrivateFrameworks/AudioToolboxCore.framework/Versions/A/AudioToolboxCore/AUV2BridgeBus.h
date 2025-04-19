@class AUAudioUnitV2Bridge;

@interface AUV2BridgeBus : AUAudioUnitBus {
    AUAudioUnitV2Bridge *_owner;
    struct OpaqueAudioComponentInstance { } *_audioUnit;
    unsigned int _scope;
    unsigned int _element;
}

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)format;
- (id)initWithOwner:(id)a0 au:(struct OpaqueAudioComponentInstance { } *)a1 scope:(unsigned int)a2 element:(unsigned int)a3;
- (BOOL)setFormat:(id)a0 error:(id *)a1;

@end
