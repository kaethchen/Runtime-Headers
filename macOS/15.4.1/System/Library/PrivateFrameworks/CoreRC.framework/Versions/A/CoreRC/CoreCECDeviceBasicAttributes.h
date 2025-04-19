@class NSDictionary;

@interface CoreCECDeviceBasicAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long cecVersion;
@property (readonly, nonatomic) unsigned long long vendorID;
@property (readonly, nonatomic) unsigned long long allDeviceTypes;
@property (readonly, nonatomic) unsigned long long deviceFeatures;
@property (readonly, copy, nonatomic) NSDictionary *rcProfile;
@property (readonly, nonatomic) BOOL isActiveSource;
@property (readonly, nonatomic) unsigned long long options;

+ (id)deviceAttributesWithPrimaryType:(unsigned long long)a0 otherTypes:(unsigned long long)a1 features:(unsigned long long)a2 rcProfile:(id)a3 vendorID:(unsigned long long)a4 version:(unsigned long long)a5;
+ (id)deviceAttributesWithPrimaryType:(unsigned long long)a0 otherTypes:(unsigned long long)a1 features:(unsigned long long)a2 rcProfile:(id)a3 vendorID:(unsigned long long)a4 version:(unsigned long long)a5 active:(BOOL)a6;
+ (id)deviceAttributesWithPrimaryType:(unsigned long long)a0 otherTypes:(unsigned long long)a1 features:(unsigned long long)a2 rcProfile:(id)a3 vendorID:(unsigned long long)a4 version:(unsigned long long)a5 active:(BOOL)a6 options:(unsigned long long)a7;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPrimaryType:(unsigned long long)a0 otherTypes:(unsigned long long)a1 features:(unsigned long long)a2 rcProfile:(id)a3 vendorID:(unsigned long long)a4 version:(unsigned long long)a5 active:(BOOL)a6 options:(unsigned long long)a7;

@end
