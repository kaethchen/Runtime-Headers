@class INSpeakableString, NSString, INBalanceAmount;

@interface INPaymentAccount : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) INSpeakableString *nickname;
@property (readonly, copy) NSString *accountNumber;
@property (readonly) long long accountType;
@property (readonly, copy) INSpeakableString *organizationName;
@property (readonly, copy) INBalanceAmount *balance;
@property (readonly, copy) INBalanceAmount *secondaryBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithNickname:(id)a0 number:(id)a1 accountType:(long long)a2 organizationName:(id)a3;
- (id)initWithNickname:(id)a0 number:(id)a1 accountType:(long long)a2 organizationName:(id)a3 balance:(id)a4 secondaryBalance:(id)a5;

@end
