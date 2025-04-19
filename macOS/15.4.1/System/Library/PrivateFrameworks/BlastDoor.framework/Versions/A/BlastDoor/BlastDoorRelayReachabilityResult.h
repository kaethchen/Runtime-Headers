@class NSString, NSArray;

@interface BlastDoorRelayReachabilityResult : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityResult;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) long long error;
@property (nonatomic, readonly) NSArray *handleResults;
@property (nonatomic, readonly) BOOL isFinal;
@property (nonatomic, readonly) BOOL allAreReachable;
@property (nonatomic, readonly) BOOL didCheckServer;

- (id)init;
- (void).cxx_destruct;

@end
