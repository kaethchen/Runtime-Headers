@class CTLazuliChatBotMediaUrl, CTLazuliChatBotMediaFingerprint;

@interface CTLazuliChatBotMedia : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotMediaUrl *mediaUrl;
@property (retain, nonatomic) CTLazuliChatBotMediaFingerprint *fingerprint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotMedia:(id)a0;

@end
