@interface GEOPrivacyManager : NSObject {
    BOOL _lastKnownLocationServicesEnabled;
    BOOL _hasLastKnownLocationServicesEnabled;
}

@property (readonly, nonatomic) BOOL hasFiredCallHistoryRecentsClearedNotification;
@property (readonly, nonatomic) BOOL hasFiredResetPrivacyWarningsNotification;
@property (readonly, nonatomic) BOOL hasFiredLocationServicesDisabledNotification;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)_fireRecentsClearedNotification;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_locationServicesStateChanged;

@end
