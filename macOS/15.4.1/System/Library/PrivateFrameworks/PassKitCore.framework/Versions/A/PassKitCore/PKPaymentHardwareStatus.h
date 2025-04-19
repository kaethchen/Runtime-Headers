@class NSError;

@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasExternalTouchIDAccessoryConnected;
@property (readonly, nonatomic) BOOL hasExternalTouchIDAccessoryAuthorized;
@property (readonly, nonatomic) BOOL hasExternalTouchIDAccessoryPaired;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasSecureElement;
@property (nonatomic) BOOL hasRemoteDevices;
@property (nonatomic) unsigned long long ownershipState;
@property (nonatomic) BOOL hasClamshell;
@property (nonatomic, getter=isClamshellClosed) BOOL clamshellClosed;
@property (nonatomic, getter=isScreenReaderRunning) BOOL screenReaderRunning;
@property (nonatomic) BOOL remotePaymentsRequiredForVoiceover;
@property (nonatomic) long long localCoprocessorType;
@property (nonatomic) BOOL hasTouchBar;
@property (nonatomic) BOOL automaticallyCheckForUpdates;
@property (nonatomic) BOOL automaticallyInstallConfigDataAndSecurityUpdates;
@property (nonatomic) BOOL hasInternalTouchIDSensor;
@property (nonatomic) unsigned long long externalTouchIDStatus;
@property (retain, nonatomic) NSError *policyError;
@property (nonatomic) BOOL canMakeRemotePayments;
@property (nonatomic) BOOL canDecryptBAAEncryptedData;
@property (readonly, nonatomic, getter=_isDemoModeActive) BOOL _isDemoModeActive;
@property (nonatomic) BOOL isSRD;
@property (readonly, nonatomic) BOOL canEvaluatePolicy;
@property (readonly, nonatomic) BOOL canMakePayments;
@property (readonly, nonatomic) BOOL canMakeLocalPayments;
@property (readonly, nonatomic) BOOL canMakeVirtualCardPayments;
@property (readonly, nonatomic) BOOL canMakeAMPPayments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_canMakeLocalPaymentsNeedingSecureIntent:(BOOL)a0;
- (BOOL)_meetsSecurityRequirements;
- (BOOL)canAddCardWithError:(id *)a0;

@end
