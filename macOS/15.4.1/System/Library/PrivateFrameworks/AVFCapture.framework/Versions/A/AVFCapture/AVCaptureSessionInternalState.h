@interface AVCaptureSessionInternalState : NSObject {
    struct OpaqueCMIOGraph { } *_graph;
    struct __CFDictionary { } *_supportUnitsForInputPorts;
    BOOL _hasAudioMixerNode;
    int _audioMixerNode;
    BOOL _hasAudioMixerFanOutNode;
    int _audioMixerFanOutNode;
    BOOL _masterSynchronizerSet;
    int _candidateMasterSynchronizerNode;
}

- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
