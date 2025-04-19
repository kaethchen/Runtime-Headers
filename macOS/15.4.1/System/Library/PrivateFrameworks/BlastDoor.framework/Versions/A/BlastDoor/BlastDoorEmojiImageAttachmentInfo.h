@class NSString;

@interface BlastDoorEmojiImageAttachmentInfo : NSObject {
    void /* unknown type, empty encoding */ emojiImageAttachmentInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *emojiImageContentIdentifer;
@property (nonatomic, readonly) NSString *emojiImageShortDescription;
@property (nonatomic, readonly) NSString *stickerIdentifier;
@property (nonatomic, readonly) NSString *stickerPackIdentifier;
@property (nonatomic, readonly) NSString *stickerHash;
@property (nonatomic, readonly) NSString *stickerExternalURI;
@property (nonatomic, readonly) NSString *stickerBalloonBundleID;

- (id)init;
- (void).cxx_destruct;

@end
