@class NSString;

@interface _PPSSQLiteComparisonPredicateLikeWithEscape : PPSSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSString *escapeCharacter;

- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 value:(id)a1 escapeCharacter:(id)a2;
- (id)sqlForEntity:(id)a0;

@end
