@class NSArray, NSString;

@interface IFRequirementsEvaluatorResult : NSObject {
    BOOL _shouldContinue;
    BOOL _shouldSkip;
    NSArray *_errorDeps;
    NSString *_title;
    NSString *_message;
    id _reference;
}

- (void)dealloc;
- (id)description;
- (id)reason;
- (id)message;
- (void)setMessage:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (BOOL)shouldContinue;
- (id)reference;
- (BOOL)shouldSkip;
- (void)setShouldContinue:(BOOL)a0;
- (id)errorRequirements;
- (id)initWithShouldContinue:(BOOL)a0 shouldSkip:(BOOL)a1 errorDeps:(id)a2 reference:(id)a3;

@end
