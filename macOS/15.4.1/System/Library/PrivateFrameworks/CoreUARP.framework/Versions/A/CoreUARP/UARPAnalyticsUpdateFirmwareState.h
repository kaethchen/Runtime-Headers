@class NSNumber, UARPAccessoryID, UARPUpdateFirmwareAnalyticsEventFrameworkParams, UARPAssetID, NSDate, NSObject;
@protocol OS_os_log;

@interface UARPAnalyticsUpdateFirmwareState : NSObject {
    NSDate *_startDate;
    long long _state;
    NSObject<OS_os_log> *_log;
    unsigned long long _stagingDurationSeconds;
    NSDate *_stagingDurationStart;
    unsigned long long _stagingIterations;
    BOOL _stagingUserInitiated;
    NSNumber *_stagingStatus;
    unsigned long long _analyticsApplyDurationSeconds;
    NSDate *_analyticsApplyDurationStart;
    NSNumber *_analyticsApplyUserInitiated;
    NSNumber *_analyticsApplyStatus;
}

@property (readonly) UARPAccessoryID *accessoryID;
@property (readonly) UARPAssetID *assetID;
@property (readonly) unsigned long long age;
@property (readonly) UARPUpdateFirmwareAnalyticsEventFrameworkParams *eventParams;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)accessoryUnreachable;
- (id)initWithAccessoryID:(id)a0 assetID:(id)a1;
- (void)stagingCompleteWithStatus:(unsigned long long)a0;
- (void)stagingInterrupted;
- (void)stagingStartedWithUserIntent:(BOOL)a0;
- (void)updateStagingDuration;

@end
