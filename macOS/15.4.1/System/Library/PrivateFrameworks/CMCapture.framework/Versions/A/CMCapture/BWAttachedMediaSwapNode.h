@class NSString, NSArray;

@interface BWAttachedMediaSwapNode : BWNode {
    NSString *_primaryFormatToAttachedMediaKey;
    NSString *_attachedMediaKeyToPrimaryFormat;
    NSArray *_sampleBufferAttachmentsToTransfer;
    BOOL _generatesDroppedSampleMarkerBuffers;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithPrimaryFormatToAttachedMediaKey:(id)a0 attachedMediaKeyToPrimaryFormat:(id)a1 sampleBufferAttachmentsToTransfer:(id)a2 generatesDroppedSampleMarkerBuffers:(BOOL)a3;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
