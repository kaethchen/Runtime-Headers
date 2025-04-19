@class NSMutableSet;

@interface DNDMutableApplicationConfiguration : DNDApplicationConfiguration

@property (nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (copy, nonatomic) NSMutableSet *allowedThreads;
@property (copy, nonatomic) NSMutableSet *deniedThreads;

- (void)setAllowedThreads:(id)a0;
- (void)setDeniedThreads:(id)a0;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)a0;

@end
