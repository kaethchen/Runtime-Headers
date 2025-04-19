@class NSDictionary;

@interface AppleMediaServicesUI.EngagementDeepLinkEvent : NSObject <AMSEngagementEvent> {
    void /* unknown type, empty encoding */ engagementData;
}

@property (nonatomic, readonly) NSDictionary *engagementData;

- (id)init;
- (void).cxx_destruct;

@end
