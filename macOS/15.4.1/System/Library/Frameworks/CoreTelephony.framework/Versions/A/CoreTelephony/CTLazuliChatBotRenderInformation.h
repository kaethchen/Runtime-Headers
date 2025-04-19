@class CTLazuliChatBotGenericCssTemplateInfo, CTLazuliChatBotMenuItem, CTLazuliChatBotVerificationDetails, CTLazuliChatBotInformation;

@interface CTLazuliChatBotRenderInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotInformation *botInfo;
@property (retain, nonatomic) CTLazuliChatBotMenuItem *persistentMenu;
@property (retain, nonatomic) CTLazuliChatBotVerificationDetails *verificationDetails;
@property (retain, nonatomic) CTLazuliChatBotGenericCssTemplateInfo *cssInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotRenderInformation:(id)a0;

@end
