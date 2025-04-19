@class NSMutableDictionary;

@interface BWFanOutNode : BWNode {
    id *_outputsCArray;
    BOOL *_outputsDiscardsAttachedMedia;
    NSMutableDictionary *_outputsAllowedAttachedMediaKeys;
    NSMutableDictionary *_outputsDisallowedAttachedMediaKeys;
    int _outputsCount;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (BOOL)hasNonLiveConfigurationChanges;
- (id)initWithFanOutCount:(int)a0 mediaType:(unsigned int)a1;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAllowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;
- (void)setDisallowedAttachedMediaKeys:(id)a0 forOutputIndex:(int)a1;
- (void)setDiscardsAttachedMedia:(BOOL)a0 forOutputIndex:(int)a1;

@end
