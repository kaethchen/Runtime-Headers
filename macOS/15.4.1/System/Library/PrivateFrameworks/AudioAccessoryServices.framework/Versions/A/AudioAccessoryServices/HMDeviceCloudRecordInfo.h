@class NSString, NSNumber, NSDate;

@interface HMDeviceCloudRecordInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bluetoothAddress;
@property unsigned char haRegionStatus;
@property unsigned char hpRegionStatus;
@property char mediaAssistEnabled;
@property char pmeMediaEnabled;
@property char pmeVoiceEnabled;
@property char swipeGainEnabled;
@property (retain, nonatomic) NSNumber *bottomMicFaultCountLeft;
@property (retain, nonatomic) NSNumber *bottomMicFaultCountRight;
@property (retain, nonatomic) NSNumber *diagnosticMeasurementsCount;
@property (retain, nonatomic) NSNumber *freqAccuracyFaultCountLeft;
@property (retain, nonatomic) NSNumber *freqAccuracyFaultCountRight;
@property (retain, nonatomic) NSNumber *frontVentFaultCountLeft;
@property (retain, nonatomic) NSNumber *frontVentFaultCountRight;
@property (retain, nonatomic) NSNumber *innerMicFaultCountLeft;
@property (retain, nonatomic) NSNumber *innerMicFaultCountRight;
@property (retain, nonatomic) NSDate *latestDiagnosticTimestampLeft;
@property (retain, nonatomic) NSDate *latestDiagnosticTimestampRight;
@property (retain, nonatomic) NSNumber *rearVentFaultCountLeft;
@property (retain, nonatomic) NSNumber *rearVentFaultCountRight;
@property (retain, nonatomic) NSNumber *speakerFaultCountLeft;
@property (retain, nonatomic) NSNumber *speakerFaultCountRight;
@property (retain, nonatomic) NSNumber *topMicFaultCountLeft;
@property (retain, nonatomic) NSNumber *topMicFaultCountRight;
@property (retain, nonatomic) NSNumber *totalHarmonicDistortionFaultCountLeft;
@property (retain, nonatomic) NSNumber *totalHarmonicDistortionFaultCountRight;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithBluetoothAddress:(id)a0;

@end
