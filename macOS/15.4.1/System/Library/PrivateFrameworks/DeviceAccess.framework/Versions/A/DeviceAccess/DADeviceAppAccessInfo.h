@class NSString, DADiscoveryConfiguration;

@interface DADeviceAppAccessInfo : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long accessoryOptions;
@property (copy, nonatomic) DADiscoveryConfiguration *appDiscoveryConfiguration;
@property (nonatomic) double approveTime;
@property (readonly, copy, nonatomic) NSString *associationIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 deviceIdentifier:(id)a1 state:(long long)a2;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)persistentDictionaryRepresentation;
- (id)initWithBundleIdentifier:(id)a0 deviceIdentifier:(id)a1 accessoryOptions:(unsigned long long)a2 state:(long long)a3;

@end
