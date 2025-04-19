@class NSString;

@interface PodcastsFoundation.AnalyticsUserIdentifier : NSObject {
    void /* unknown type, empty encoding */ clientId;
    void /* unknown type, empty encoding */ userId;
}

@property (nonatomic, readonly) NSString *clientId;
@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ userAllowsPersonalization;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ userUnder13YearsOld;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ userIsManagedAccount;

- (id)init;
- (void).cxx_destruct;

@end
