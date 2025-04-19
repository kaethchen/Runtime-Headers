@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceId;
@property (copy) NSString *deviceName;
@property BOOL isActiveDevice;
@property BOOL isThisDevice;
@property BOOL isCompanionDevice;
@property BOOL isAutoMeCapable;
@property (copy) NSString *idsDeviceId;

+ (id)deviceWithId:(id)a0 name:(id)a1 idsDeviceId:(id)a2 isActive:(BOOL)a3 isThisDevice:(BOOL)a4 isCompanionDevice:(BOOL)a5 isAutoMeCapable:(BOOL)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateIsActive:(BOOL)a0 isThisDevice:(BOOL)a1;

@end
