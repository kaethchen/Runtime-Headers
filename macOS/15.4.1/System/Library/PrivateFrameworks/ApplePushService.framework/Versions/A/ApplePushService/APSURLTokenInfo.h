@class NSString, NSData, NSDate;

@interface APSURLTokenInfo : NSObject <APSTokenInfo, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSData *vapidPublicKey;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSData *baseToken;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)allowMultipleTokens;
- (id)initWithTopic:(id)a0;
- (id)initWithTopic:(id)a0 vapidPublicKey:(id)a1;
- (id)initWithTopic:(id)a0 vapidPublicKey:(id)a1 expirationDate:(id)a2;

@end
