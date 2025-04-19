@class NSString;

@interface AMPDeviceSoftwareInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *softwareVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *statusMessage;
@property (retain, nonatomic) NSString *disabledMessage;
@property (retain, nonatomic) NSString *updateCaptionMessage;
@property (nonatomic) BOOL updateCaptionEnabled;
@property (retain, nonatomic) NSString *updateButtonTitle;
@property (nonatomic) BOOL hasCheckForUpdates;
@property (nonatomic) BOOL updateButtonEnabled;
@property (retain, nonatomic) NSString *restoreCaptionMessage;
@property (nonatomic) BOOL restoreCaptionEnabled;
@property (retain, nonatomic) NSString *restoreButtonTitle;
@property (nonatomic) BOOL restoreButtonEnabled;
@property (retain, nonatomic) NSString *recoveryModeTitle;
@property (retain, nonatomic) NSString *ejectButtonTitle;
@property (nonatomic) BOOL softwareUpdateRestoreInProgress;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
