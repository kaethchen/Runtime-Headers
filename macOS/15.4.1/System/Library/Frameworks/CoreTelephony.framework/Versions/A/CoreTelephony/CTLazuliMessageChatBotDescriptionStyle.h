@class CTLazuliMessageChatBotFontStyle;

@interface CTLazuliMessageChatBotDescriptionStyle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliMessageChatBotFontStyle *style;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct MessageChatBotDescriptionStyle { struct MessageChatBotFontStyle { BOOL x0; BOOL x1; BOOL x2; } x0; } *)a0;
- (BOOL)isEqualToCTLazuliMessageChatBotDescriptionStyle:(id)a0;

@end
