@class NSString;

@interface FMDActivationLockInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isActivationLocked;
@property (retain, nonatomic) NSString *maskedAppleID;
@property (retain, nonatomic) NSString *maskedOrganizationID;
@property (nonatomic) BOOL isOfflineFindingEnabled;
@property (retain, nonatomic) NSString *messageICloudAuth;
@property (retain, nonatomic) NSString *messageOSAuth;
@property (retain, nonatomic) NSString *helpURL;
@property (nonatomic) BOOL supportsDeviceAuth;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
