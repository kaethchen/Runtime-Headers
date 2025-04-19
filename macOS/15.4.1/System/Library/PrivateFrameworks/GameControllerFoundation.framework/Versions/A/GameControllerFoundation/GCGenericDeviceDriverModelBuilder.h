@class GCGenericDeviceDriverPropertiesModel, NSSet, GCGenericDeviceMotionEventDriverModel, GCGenericDeviceRumbleModel, GCGenericDeviceInputEventDriverModel;

@interface GCGenericDeviceDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSSet *elements;
@property (copy, nonatomic) GCGenericDeviceDriverPropertiesModel *properties;
@property (copy, nonatomic) GCGenericDeviceInputEventDriverModel *input;
@property (copy, nonatomic) GCGenericDeviceMotionEventDriverModel *motion;
@property (copy, nonatomic) GCGenericDeviceRumbleModel *rumble;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (void)initializeWithModel:(id)a0;

@end
