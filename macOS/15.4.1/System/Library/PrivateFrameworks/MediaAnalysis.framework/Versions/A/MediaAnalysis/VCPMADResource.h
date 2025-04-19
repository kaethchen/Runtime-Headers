@interface VCPMADResource : NSObject

@property (readonly, nonatomic) long long activeCost;
@property (readonly, nonatomic) long long inactiveCost;

- (id)description;
- (void)purge;

@end
