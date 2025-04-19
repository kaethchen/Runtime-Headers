@class GCGenericDeviceDriverPropertiesModel, NSSet, GCGenericDeviceMotionEventDriverModel, GCGenericDeviceRumbleModel, GCGenericDeviceInputEventDriverModel;

@interface GCGenericDeviceDriverModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *elements;
@property (readonly, copy) GCGenericDeviceDriverPropertiesModel *properties;
@property (readonly, copy) GCGenericDeviceInputEventDriverModel *input;
@property (readonly, copy) GCGenericDeviceMotionEventDriverModel *motion;
@property (readonly, copy) GCGenericDeviceRumbleModel *rumble;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
