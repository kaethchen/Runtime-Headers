@class NSString, NSSet, NSPersonNameComponents, NSDate;

@interface TIInputContextEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *senderIdentifier;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *entryIdentifier;
@property (readonly, nonatomic) NSSet *primaryRecipientIdentifiers;
@property (readonly, nonatomic) NSSet *secondaryRecipientIdentifiers;
@property (readonly, nonatomic) long long entryType;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, copy, nonatomic) NSString *spotlightCacheKey;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSPersonNameComponents *senderName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTimestamp:(id)a0;
- (void)setEntryType:(long long)a0;
- (void)setThreadIdentifier:(id)a0;
- (void)setText:(id)a0;
- (void)setIsFromMe:(BOOL)a0;
- (void)setSenderIdentifier:(id)a0;
- (void)setSenderName:(id)a0;
- (void)setPrimaryRecipientIdentifiers:(id)a0;
- (void)enforceMaxContextLength:(unsigned long long)a0;
- (void)setEntryIdentifier:(id)a0;
- (void)setSecondaryRecipientIdentifiers:(id)a0;
- (void)setSpotlightCacheKey:(id)a0;

@end
