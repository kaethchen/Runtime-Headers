@class NSDictionary, NSString, AVTextStyleRuleInternal;

@interface AVTextStyleRule : NSObject <NSCopying> {
    AVTextStyleRuleInternal *_textStyleRule;
}

@property (readonly, nonatomic) NSDictionary *textMarkupAttributes;
@property (readonly, nonatomic) NSString *textSelector;

+ (id)textStyleRulesFromPropertyList:(id)a0;
+ (id)propertyListForTextStyleRules:(id)a0;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)a0;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)a0 textSelector:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)_dictionaryPlistRepresentation;
- (id)initWithTextMarkupAttributes:(id)a0;
- (id)initWithTextMarkupAttributes:(id)a0 textSelector:(id)a1;

@end
