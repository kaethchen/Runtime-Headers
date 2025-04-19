@class NSNumber, NSString, NSDate;

@interface DTSDisplayPortDeviceAnalyticsData : NSObject

@property (retain, nonatomic) NSNumber *oui;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *hardwareVersion;
@property (retain, nonatomic) NSString *portType;
@property (retain, nonatomic) NSString *preLockFirmwareVersion;
@property (retain, nonatomic) NSString *postLockFirmwareVersion;
@property (nonatomic) double lockUnlockTimeInterval;
@property (retain, nonatomic) NSDate *lockDate;

- (void).cxx_destruct;
- (void)_reset;
- (void)sendEvent;
- (void)deviceUnlocked:(id)a0;
- (id)_readDFPTypeFrom:(id)a0;
- (void)deviceLockedWithInfo:(id)a0;

@end
