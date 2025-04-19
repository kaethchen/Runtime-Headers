@class NSString, NSDictionary;

@interface _TtCOO13HomeKitDaemon6Metric10MediaGroup22PreflightCheckLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ eventName;
    void /* unknown type, empty encoding */ sessionIdentifier;
    void /* unknown type, empty encoding */ accessoryCategory;
    void /* unknown type, empty encoding */ fetchDuration;
    void /* unknown type, empty encoding */ firstImportCompleted;
    void /* unknown type, empty encoding */ hasMediaRouteIdentifier;
    void /* unknown type, empty encoding */ hasPairingIdentity;
    void /* unknown type, empty encoding */ hasConnectedEventRouterClient;
    void /* unknown type, empty encoding */ isCloudSignedIn;
    void /* unknown type, empty encoding */ hasManatee;
    void /* unknown type, empty encoding */ isIdsReady;
    void /* unknown type, empty encoding */ isOwnerUser;
}

@property (nonatomic) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
