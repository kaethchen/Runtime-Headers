@class NSSymbolReplaceContentTransition;

@interface NSSymbolMagicReplaceContentTransition : NSSymbolContentTransition

@property (retain, nonatomic) NSSymbolReplaceContentTransition *_fallback;

+ (id)transition;
+ (id)transitionWithFallback:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_rbOptionsMutable;

@end
