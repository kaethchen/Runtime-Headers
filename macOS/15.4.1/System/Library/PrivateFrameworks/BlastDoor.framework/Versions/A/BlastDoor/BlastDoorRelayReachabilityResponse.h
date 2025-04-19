@class NSString, BlastDoorRelayReachabilityResult;

@interface BlastDoorRelayReachabilityResponse : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityResponse;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorRelayReachabilityResult *result;

- (id)init;
- (void).cxx_destruct;

@end
