@class NSString, NSObject;
@protocol OS_os_log;

@interface HIDRMUIUserAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requiresPairing;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) NSString *deviceName;

+ (id)requestWithDeviceName:(id)a0 requiresPairing:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 requiresPairing:(BOOL)a1;

@end
