@interface HAPAccessoryServerBookkeeping : HMFObject

@property (readonly, nonatomic) unsigned long long initialDiscoveryMethod;
@property (nonatomic) unsigned long long lastDiscoveryMethod;

- (id)initWithDiscoveryMethod:(unsigned long long)a0;

@end
