@class NSString;

@interface AAProxCardsInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bluetoothAddress;
@property unsigned long long caseDoubleTapVersion;
@property unsigned long long headGesturesVersion;
@property unsigned long long hearingAssistVersion;
@property unsigned long long hearingTestVersion;
@property unsigned long long heartRateVersion;
@property unsigned long long usbAudioVersion;
@property unsigned long long voiceQualityVersion;
@property unsigned long long whatsNewVersion;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithBluetoothAddress:(id)a0;

@end
