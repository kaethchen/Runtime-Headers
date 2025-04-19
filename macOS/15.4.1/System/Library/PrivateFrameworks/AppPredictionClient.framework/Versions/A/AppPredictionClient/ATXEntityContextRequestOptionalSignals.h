@class NSString, NSNumber;

@interface ATXEntityContextRequestOptionalSignals : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *entityID;
@property (retain, nonatomic) NSNumber *isFromPinnedMessage;
@property (retain, nonatomic) NSNumber *isFromGroupMessage;
@property (retain, nonatomic) NSNumber *isMentionedInGroup;
@property (retain, nonatomic) NSNumber *isAudioMessage;
@property (retain, nonatomic) NSNumber *isFromMailingList;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntityID:(id)a0;

@end
