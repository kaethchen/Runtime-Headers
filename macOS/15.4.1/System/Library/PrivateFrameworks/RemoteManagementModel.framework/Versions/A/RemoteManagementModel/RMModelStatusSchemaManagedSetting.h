@class NSString;

@interface RMModelStatusSchemaManagedSetting : NSObject

@property (readonly, copy, nonatomic) NSString *managedSettingKey;
@property (readonly, copy, nonatomic) NSString *valueType;
@property (readonly) BOOL invertBoolean;

+ (id)parseJSON:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedSetting:(id)a0 valueType:(id)a1 invertBoolean:(BOOL)a2;
- (BOOL)isEqualToManagedSetting:(id)a0;

@end
