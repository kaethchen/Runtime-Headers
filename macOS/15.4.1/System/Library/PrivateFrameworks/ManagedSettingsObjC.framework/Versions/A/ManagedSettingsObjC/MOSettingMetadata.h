@class NSString, NSSet;

@interface MOSettingMetadata : NSObject

@property (readonly, nonatomic) NSString *settingName;
@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) BOOL isPrivacySensitive;
@property (readonly, nonatomic) id defaultValue;
@property (readonly, nonatomic) NSSet *responsibleClients;

- (void).cxx_destruct;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithSettingName:(id)a0 defaultValue:(id)a1 isPublic:(BOOL)a2 scope:(id)a3 isPrivacySensitive:(BOOL)a4;
- (id)persistableValueFromValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;

@end
