@class CTLazuliChatBotSuggestedChipList, CTLazuliChatBotCard;

@interface CTLazuliMessageChatBotCard : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotCard *card;
@property (retain, nonatomic) CTLazuliChatBotSuggestedChipList *chipList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageChatBotCard:(id)a0;

@end
