@class NSString;

@interface CTLazuliChatBotVerificationDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL verified;
@property (retain, nonatomic) NSString *verifiedBy;
@property (retain, nonatomic) NSString *expires;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotVerificationDetails:(id)a0;

@end
