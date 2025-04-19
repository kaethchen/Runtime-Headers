@class CTLazuliMessageChatBotCardStyle, CTLazuliMessageChatBotDescriptionStyle, CTLazuliMessageChatBotTitleStyle;

@interface CTLazuliChatBotCardLayout : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long cardOrientation;
@property (nonatomic) long long imageAlignment;
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
- (BOOL)isEqualToCTLazuliChatBotCardLayout:(id)a0;

@end
