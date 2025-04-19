@class NSDictionary;

@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    NSDictionary *_factorLevels;
}

- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)a0;
- (id)initWithFactorLevels:(id)a0;

@end
