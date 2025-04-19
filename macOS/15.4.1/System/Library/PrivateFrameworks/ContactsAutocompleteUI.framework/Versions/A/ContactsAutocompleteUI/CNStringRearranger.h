@interface CNStringRearranger : NSObject

+ (id)indexesOfTypedTokens:(id)a0 inNameTokens:(id)a1;
+ (id)rearrangeNameTokens:(id)a0 toMatchOrderOfTypedTokens:(id)a1;
+ (id)rearrangeString:(id)a0 toMatchOrderOfTypedString:(id)a1;
+ (id)tokens:(id)a0 atIndexes:(id)a1;
+ (id)tokens:(id)a0 notAtIndexes:(id)a1;

@end
