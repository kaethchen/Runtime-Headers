@protocol MPRandom;

@interface MPRandomDistribution : NSObject <MPRandom, NSSecureCoding> {
    id<MPRandom> _source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long lowestValue;
@property (readonly, nonatomic) long long highestValue;
@property (readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;

@end
