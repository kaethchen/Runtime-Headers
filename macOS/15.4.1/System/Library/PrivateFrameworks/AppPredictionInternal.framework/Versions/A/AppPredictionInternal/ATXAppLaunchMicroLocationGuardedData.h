@class NSDictionary, ATXLocationToLaunchCorrelation, NSDate;

@interface ATXAppLaunchMicroLocationGuardedData : NSObject {
    id _waitForUnlockNotificationToken;
    NSDictionary *_currentMicroLocation;
    NSDate *_currentMicroLocationDate;
    ATXLocationToLaunchCorrelation *_locationToAppLaunchCorrelation;
    ATXLocationToLaunchCorrelation *_locationToActionKeyCorrelation;
}

- (void).cxx_destruct;
- (id)getCurrentMicroLocation;
- (id)initWithCurrentMicroLocation:(id)a0;
- (BOOL)microLocationExpired:(id)a0;
- (void)setCurrentMicroLocation:(id)a0;

@end
