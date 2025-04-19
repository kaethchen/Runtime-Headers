@class NSString, WLKNotificationCenter;

@interface VUIJSNotificationCenter : VUIJSObject <WLKNotificationCenterDelegate, VUIJSNotificationCenter> {
    WLKNotificationCenter *_center;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleAction:(id)a0;
- (void)setBadgeNumber:(id)a0;
- (id)initWithAppContext:(id)a0;
- (void)clearBadgeData;

@end
