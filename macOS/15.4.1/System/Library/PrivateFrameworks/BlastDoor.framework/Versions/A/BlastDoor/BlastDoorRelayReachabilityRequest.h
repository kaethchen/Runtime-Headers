@class NSString, NSArray, BlastDoorRelayReachabilityContext;

@interface BlastDoorRelayReachabilityRequest : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityRequest;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *handles;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) BlastDoorRelayReachabilityContext *context;

- (id)init;
- (void).cxx_destruct;

@end
