@interface TVISEvolutionServicePurgeableAmounts : NSObject

@property (readonly, nonatomic) long long maxAmount;
@property (readonly, nonatomic) long long highAmount;
@property (readonly, nonatomic) long long mediumAmount;
@property (readonly, nonatomic) long long lowAmount;

- (id)description;
- (long long)amountForUrgency:(long long)a0;
- (id)initWithMaxAmount:(long long)a0 highAmount:(long long)a1 mediumAmount:(long long)a2 lowAmount:(long long)a3;
- (id)purgeableAmountsByConcatenatingPurgeableAmounts:(id)a0;

@end
