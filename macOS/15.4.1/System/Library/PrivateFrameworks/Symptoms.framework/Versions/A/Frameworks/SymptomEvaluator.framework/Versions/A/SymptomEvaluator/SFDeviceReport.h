@class NWAccumulator, NSString, NSArray, SFPrivacyProxyTraffic;

@interface SFDeviceReport : NSObject

@property (nonatomic) unsigned char timestampBucket;
@property (nonatomic) unsigned int batteryPercentage;
@property (nonatomic) unsigned int batteryCurrentCapacity;
@property (nonatomic) unsigned int batteryMaximumCapacity;
@property (nonatomic) unsigned int batteryDesignCapacity;
@property (nonatomic) unsigned int batteryAbsoluteCapacity;
@property (nonatomic) unsigned int batteryRawCurrentCapacity;
@property (nonatomic) unsigned int batteryRawMaximumCapacity;
@property (nonatomic) unsigned int batteryDepthOfDischarge;
@property (nonatomic) unsigned int batteryVoltage;
@property (nonatomic) unsigned int batteryTimeRemaining;
@property (nonatomic) int batteryTemperature;
@property (nonatomic) BOOL batteryExternalPowerIsConnected;
@property (nonatomic) BOOL batteryIsCharging;
@property (nonatomic) BOOL batteryFullyCharged;
@property (nonatomic) BOOL batteryAtWarnLevel;
@property (nonatomic) BOOL batteryAtCriticalLevel;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL devicePluggedIn;
@property (nonatomic) BOOL deviceScreenOn;
@property (nonatomic) unsigned int deviceScreenBrightness;
@property (nonatomic) unsigned int deviceOrientation;
@property (nonatomic) unsigned int thermalPressure;
@property (retain, nonatomic) NWAccumulator *batteryAccumulator;
@property (nonatomic) BOOL quicExperimentallyEnabled;
@property (nonatomic) BOOL unifiedStackExperimentallyEnabled;
@property (nonatomic) unsigned int privacyProxyServiceStatus;
@property (nonatomic) unsigned int privacyProxyUserTier;
@property (retain, nonatomic) NSArray *privacyProxyNetworkStatus;
@property (retain, nonatomic) SFPrivacyProxyTraffic *privacyProxyTraffic;
@property (retain, nonatomic) NSString *trialTreatmentId;
@property (retain, nonatomic) NSString *packetFilterState;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryReport:(BOOL)a0;

@end
