@class CTLazuliMessageChatBotCardStyle, CTLazuliMessageChatBotDescriptionStyle, CTLazuliMessageChatBotTitleStyle;

@interface CTLazuliMessageChatBotCardCarouselLayout : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long orientation;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) long long width;
@property (retain, nonatomic) CTLazuliMessageChatBotTitleStyle *titleStyle;
@property (retain, nonatomic) CTLazuliMessageChatBotDescriptionStyle *descriptionStyle;
@property (retain, nonatomic) CTLazuliMessageChatBotCardStyle *cardStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageChatBotCardCarouselLayout:(id)a0;

@end
