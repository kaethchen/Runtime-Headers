@class NSString;

@interface SFAuthenticationApproveInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *idsDeviceID;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL biometricOnly;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 idsDeviceID:(id)a1 appName:(id)a2 bundleID:(id)a3 biometricOnly:(BOOL)a4;

@end
