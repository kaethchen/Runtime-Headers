@class NSString;

@interface IMLockdownManager : NSObject

@property (nonatomic, setter=_setState:) unsigned long long _state;
@property (nonatomic) BOOL _settingUpActivationState;
@property (nonatomic) BOOL _isVendorInstall;
@property (nonatomic) BOOL _isInternalInstall;
@property (nonatomic) BOOL _isNonUIInstall;
@property (nonatomic) BOOL _isCarrierInstall;
@property (nonatomic) BOOL _hasShownWaitingAlertThisSession;
@property (nonatomic) BOOL _hasShownMismatchedSIM;
@property (readonly, nonatomic) BOOL isNonUIInstall;
@property (readonly, nonatomic) BOOL isVendorInstall;
@property (readonly, nonatomic) BOOL isInternalInstall;
@property (readonly, nonatomic) BOOL isCarrierInstall;
@property (readonly, nonatomic) BOOL isActivated;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)_calculateInstallType;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (long long)lockdownState;

@end
