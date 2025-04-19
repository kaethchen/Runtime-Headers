@class NSArray;

@interface BWMetadataSynchronizerNode : BWNode {
    NSArray *_syncMetadataForPortTypes;
    NSArray *_propagateSampleBufferAttachmentKeys;
    NSArray *_propagateSampleBufferMetadataDictKeys;
    NSArray *_syncOnlyIfMetadataEnabledForKeys;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    struct { id x0; struct opaqueCMSimpleQueue *x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } *_inputsStorage;
    int _numEODMessagesReceived;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)initWithArraysOfMetadataInputs:(id)a0 propagateSampleBufferAttachmentKeys:(id)a1 propagateSampleBufferMetadataDictKeys:(id)a2 syncMetadataForPortTypes:(id)a3 syncOnlyIfMetadataEnabledForKeys:(id)a4;
- (id)initWithMetadataInputs:(id)a0 propagateSampleBufferAttachmentKeys:(id)a1 propagateSampleBufferMetadataDictKeys:(id)a2 syncMetadataForPortTypes:(id)a3 syncOnlyIfMetadataEnabledForKeys:(id)a4;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
