@class NSSet, NSArray;

@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest

@property (class, readonly, nonatomic) NSSet *currentDevicePropertyKeys;

@property (copy, nonatomic) NSArray *propertyKeys;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (id)devicePropertyKeysForPlatform:(unsigned long long)a0;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
