@interface NSLikePredicateOperator : NSMatchingPredicateOperator

- (SEL)selector;
- (BOOL)_shouldEscapeForLike;
- (id)symbol;

@end
