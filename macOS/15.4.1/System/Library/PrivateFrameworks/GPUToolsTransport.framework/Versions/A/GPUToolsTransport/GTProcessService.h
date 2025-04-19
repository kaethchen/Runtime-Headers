@class GTProcessInfo, GTServiceProperties;

@interface GTProcessService : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) GTServiceProperties *serviceProperties;
@property (copy, nonatomic) GTProcessInfo *processInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithService:(id)a0 processInfo:(id)a1;

@end
