@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_predicateString;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;

@end
