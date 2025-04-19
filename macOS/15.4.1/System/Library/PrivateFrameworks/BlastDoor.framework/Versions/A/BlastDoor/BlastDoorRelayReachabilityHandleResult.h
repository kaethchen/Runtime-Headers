@class NSString, NSDictionary, BlastDoorMBDBrandLogo;

@interface BlastDoorRelayReachabilityHandleResult : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityHandleResult;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *handleID;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) BOOL isReachable;
@property (nonatomic, readonly) NSDictionary *persistentMenu;
@property (nonatomic, readonly) NSDictionary *brandInfo;
@property (nonatomic, readonly) BlastDoorMBDBrandLogo *brandLogo;

- (id)init;
- (void).cxx_destruct;

@end
