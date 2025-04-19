@class NSDictionary, NSMutableSet, NSMutableDictionary;

@interface BWPhotoEncoderControllerInput : BWStillImageProcessorControllerInput {
    unsigned int _expectedFramesCount;
}

@property (readonly, nonatomic) BOOL requiresPhotosAdjustment;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sbufToProcess;
@property (readonly, nonatomic) long long settingsID;
@property (readonly, nonatomic) unsigned int receivedFramesCount;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *primarySampleBuffer;
@property (nonatomic) BOOL fatalErrorOccurred;
@property (nonatomic) long long reservedPrimaryImageHandle;
@property (nonatomic) long long gainMapHandle;
@property (nonatomic) long long toneMapAlternateGroupHandle;
@property (readonly, nonatomic) BOOL isStereoPhotoCapture;
@property (nonatomic) struct { long long mono; long long left; long long right; } stereoPhotoImageHandles;
@property (nonatomic) unsigned long long monoImageLocationType;
@property (nonatomic) BOOL deltaMapIsValid;
@property (readonly, nonatomic) NSMutableSet *encodedAttachedMediaKeys;
@property (readonly, nonatomic) NSMutableDictionary *stashedAttacheMediaSampleBuffersByAttachedMediaKey;
@property (readonly, nonatomic) NSDictionary *primaryImageMetadataForPrewarming;
@property (readonly, nonatomic) unsigned int processingFlagsForPrewarming;
@property (retain, nonatomic) NSDictionary *decompressStyledBufferAttributes;
@property (readonly, nonatomic) BOOL receivedAllFramesInSingleContainer;

- (void)dealloc;
- (id)description;
- (void)addAuxSbuf:(struct opaqueCMSampleBuffer { } *)a0 attachedMediakey:(id)a1 primaryImageMetadata:(id)a2 processingFlags:(unsigned int)a3;
- (void)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)finishedProcessingSbuf;
- (void)receivedFrame:(struct opaqueCMSampleBuffer { } *)a0 isPrimary:(BOOL)a1;

@end
