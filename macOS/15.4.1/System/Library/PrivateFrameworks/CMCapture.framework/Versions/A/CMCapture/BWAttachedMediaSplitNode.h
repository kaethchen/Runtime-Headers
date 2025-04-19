@class NSArray, NSMutableDictionary, NSMutableSet;

@interface BWAttachedMediaSplitNode : BWFanOutNode {
    NSArray *_attachedMediaKeys;
    NSMutableDictionary *_attachedMediaFormatDescriptions;
    NSArray *_attachedMediaToPropagateToPrimaryOutput;
    NSMutableSet *_disabledAttachedMediaKeys;
    int _numOutputs;
    BOOL _emitsNodeErrorsForMissingAttachedMedia;
    BOOL _emitsDroppedSampleForMissingAttachedMedia;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (BOOL)emitsDroppedSampleForMissingAttachedMedia;
- (BOOL)emitsNodeErrorsForMissingAttachedMedia;
- (id)initWithAttachedMediaKeys:(id)a0;
- (id)initWithAttachedMediaKeys:(id)a0 attachedMediaToPropagateToPrimaryOutput:(id)a1;
- (BOOL)isOutputRenderingEnabledForAttachedMediaKey:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setEmitsDroppedSampleForMissingAttachedMedia:(BOOL)a0;
- (void)setEmitsNodeErrorsForMissingAttachedMedia:(BOOL)a0;
- (void)setOutputRenderingEnabled:(BOOL)a0 forAttachedMediaKey:(id)a1;

@end
