@class NSString, PKOSVersionRequirement;

@interface PKDeviceSharingCapabilities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *deviceRegion;
@property (nonatomic) BOOL supportsManatee;
@property (retain, nonatomic) PKOSVersionRequirement *fromDeviceVersion;

+ (id)deviceSharingCapbilitesRequestWithProtobuf:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)protobuf;

@end
