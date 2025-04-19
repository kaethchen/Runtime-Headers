@class NSString;

@interface HMDAccessoryReachabilityTuple : HMFObject

@property (retain, nonatomic) NSString *accessoryUUID;
@property (nonatomic) BOOL previouslySentReachability;
@property (nonatomic) BOOL currentReachability;
@property (nonatomic) unsigned long long previouslySentSuspendedState;
@property (nonatomic) unsigned long long currentSuspendedState;

+ (id)tupleWithAccessoryUUID:(id)a0 reachable:(BOOL)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
