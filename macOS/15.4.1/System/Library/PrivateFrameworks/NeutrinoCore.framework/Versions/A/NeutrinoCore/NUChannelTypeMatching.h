@interface NUChannelTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long type;

- (id)description;
- (id)init;
- (id)initWithType:(long long)a0;
- (BOOL)match:(id)a0;

@end
