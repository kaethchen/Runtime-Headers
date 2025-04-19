@class NSString;

@interface MCAnimationPathExpression : MCAnimationPath

@property (copy) NSString *expression;

+ (id)animationPathWithKey:(id)a0 andExpression:(id)a1;

- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
