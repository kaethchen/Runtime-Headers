@class NSString;

@interface BlastDoorEmojiImageMetadata : NSObject {
    void /* unknown type, empty encoding */ emojiImageMetadata;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long imageStrikeCount;
@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) NSString *imageCredit;
@property (nonatomic, readonly) NSString *digitalSourceType;

- (id)init;
- (void).cxx_destruct;

@end
