@class NSSet, NSString;

@interface RMModelStatusAppManagedList_ManagedConfigurationState : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusState;

+ (id)buildWithState:(id)a0;
+ (id)buildRequiredOnlyWithState:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
