@class NSArray, NSString;

@interface AMPDeviceSetupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL showLicenseAgreement;
@property (nonatomic) BOOL showWarrantyInfo;
@property (nonatomic) BOOL suppressRestoreFromBackup;
@property (retain, nonatomic) NSArray *backupList;
@property (nonatomic) long long bestBackupIndex;
@property (retain, nonatomic) NSString *licenseAgreementText;
@property (retain, nonatomic) NSString *warrantyInfoText;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
