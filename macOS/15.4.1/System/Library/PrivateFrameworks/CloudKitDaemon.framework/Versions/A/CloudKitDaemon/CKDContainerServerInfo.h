@class NSURL, NSString;

@interface CKDContainerServerInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *publicCloudDBURL;
@property (copy, nonatomic) NSURL *publicShareServiceURL;
@property (copy, nonatomic) NSURL *publicDeviceServiceURL;
@property (copy, nonatomic) NSURL *publicCodeServiceURL;
@property (copy, nonatomic) NSURL *publicMetricsServiceURL;
@property (copy, nonatomic) NSString *containerScopedUserID;
@property (copy, nonatomic) NSString *orgAdminUserID;
@property (nonatomic) long long environment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;

@end
