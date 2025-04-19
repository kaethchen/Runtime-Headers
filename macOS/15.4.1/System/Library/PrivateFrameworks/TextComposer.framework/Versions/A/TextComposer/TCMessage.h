@class NSString, NSSet, NSPersonNameComponents, NSDate;

@interface TCMessage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *senderIdentifier;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSPersonNameComponents *senderName;
@property (readonly, copy, nonatomic) NSString *messageId;
@property (readonly, copy, nonatomic) NSSet *primaryRecipientIdentifiers;
@property (readonly, copy, nonatomic) NSSet *secondaryRecipientIdentifiers;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) long long entryType;
@property (readonly, copy, nonatomic) NSString *spotlightCacheKey;
@property (readonly, nonatomic) BOOL isFromMe;

+ (id)sortedMessageEntriesFromInputContextHistory:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithText:(id)a0 senderIdentifier:(id)a1 timestamp:(id)a2 senderName:(id)a3 messageId:(id)a4 threadIdentifier:(id)a5 entryType:(long long)a6 primaryRecipientIdentifiers:(id)a7 secondaryRecipientIdentifiers:(id)a8 spotlightCacheKey:(id)a9 isFromMe:(BOOL)a10;

@end
