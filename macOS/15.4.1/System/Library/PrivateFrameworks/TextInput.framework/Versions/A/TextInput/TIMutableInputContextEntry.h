@class NSString, NSSet, NSDate;

@interface TIMutableInputContextEntry : TIInputContextEntry

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *entryIdentifier;
@property (retain, nonatomic) NSSet *primaryRecipientIdentifiers;
@property (retain, nonatomic) NSSet *secondaryRecipientIdentifiers;
@property (nonatomic) long long entryType;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *spotlightCacheKey;
@property (nonatomic) BOOL isFromMe;


@end
