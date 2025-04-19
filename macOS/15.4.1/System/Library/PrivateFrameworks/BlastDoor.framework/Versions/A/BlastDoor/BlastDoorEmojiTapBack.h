@class NSString, NSArray, BlastDoorTapBack_MessageSummaryInfo;

@interface BlastDoorEmojiTapBack : NSObject {
    void /* unknown type, empty encoding */ emojiTapBack;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) NSString *associatedMessageFallbackHash;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (nonatomic, readonly) NSString *associatedMessageEmoji;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) BlastDoorTapBack_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) NSString *plainTextBody;

- (id)init;
- (void).cxx_destruct;

@end
