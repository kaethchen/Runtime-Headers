@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorization;
+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;
+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;
+ (id)factorizationWithFactorsAndExponents:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)unitString;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (long long)_exponentForFactor:(id)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;
- (void)_multiplyByFactorization:(id)a0;
- (void)_raiseToExponent:(long long)a0;
- (id)anyFactor;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;
- (long long)exponentForFactor:(id)a0;
- (unsigned long long)factorCount;
- (id)factorizationByDividing:(id)a0;
- (id)factorizationByMultiplying:(id)a0;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (id)reciprocal;

@end
