@class NSTimer;

@interface _NSScrollerStyleRecommender : NSObject {
    long long lastRecommendedScrollerStyle;
    NSTimer *scrollerStyleRecommendationUpdateTimer;
    BOOL isListeningForDevicesChangedNotification;
}

@property (readonly) long long recommendedScrollerStyle;

+ (id)sharedScrollerStyleRecommender;

- (void)dealloc;
- (id)init;
- (void)_cleanup;
- (void)cancelScrollerStyleRecommendationUpdate;
- (void)noteSessionDevicesChanged;
- (void)pointingDeviceGestureScrollSettingChanged:(id)a0;
- (void)scheduleScrollerStyleRecommendationUpdate:(double)a0;
- (void)scrollerStyleRecommendationUpdateTimerFired:(id)a0;
- (void)setRecommendedScrollerStyleAndNotify:(long long)a0;
- (void)showScrollBarsSettingChanged:(id)a0;
- (BOOL)startListeningForPointingDeviceConnectAndDisconnect;
- (void)startListeningForUserPreferenceNotifications;
- (void)stopListeningForPointingDeviceConnectAndDisconnect;
- (void)stopListeningForUserPreferenceNotifications;

@end
