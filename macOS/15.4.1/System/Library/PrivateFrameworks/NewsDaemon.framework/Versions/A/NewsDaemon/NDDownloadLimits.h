@interface NDDownloadLimits : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NDDownloadLimits *defaultLimits;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long minDeviceStorage;
@property (readonly, nonatomic) long long maxDownloadStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMinDeviceStorage:(long long)a0 maxDownloadStorage:(long long)a1;

@end
