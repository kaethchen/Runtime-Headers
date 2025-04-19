@class NSString, BlastDoorStickerAttachmentInfo, BlastDoorMetadata;

@interface BlastDoorRepositionStickerCommand : NSObject {
    void /* unknown type, empty encoding */ repositionStickerCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorStickerAttachmentInfo *stickerMetadata;
@property (nonatomic, readonly) NSString *stickerEditedMessageGUID;

- (id)init;
- (void).cxx_destruct;

@end
