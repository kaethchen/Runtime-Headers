@interface CalculateError : NSError

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithResultError:(int)a0;

- (id)initWithCode:(long long)a0 userInfo:(id)a1;
- (id)initIncorrectArguments:(int)a0 correctArguments:(int)a1 inFunction:(id)a2;
- (id)initIncorrectArguments:(int)a0 minArguments:(int)a1 maxArguments:(int)a2 inFunction:(id)a3;
- (id)initInvalidFlipArgument:(id)a0;
- (id)initInvalidNegativeArgument:(id)a0;
- (id)initUnbalancedSymbol:(id)a0;
- (id)initUnexpectedPunctuation:(id)a0;
- (id)initUnexpectedSymbol:(id)a0;
- (id)initUnknownVariable:(id)a0;

@end
