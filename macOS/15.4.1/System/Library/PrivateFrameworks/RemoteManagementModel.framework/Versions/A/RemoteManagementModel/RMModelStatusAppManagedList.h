@class NSSet, NSString, NSArray, NSNumber, RMModelStatusAppManagedList_ManagedConfiguration;

@interface RMModelStatusAppManagedList : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusDeclarationIdentifier;
@property (copy, nonatomic) NSString *statusName;
@property (copy, nonatomic) NSNumber *statusExternalVersionId;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusShortVersion;
@property (copy, nonatomic) NSString *statusState;
@property (copy, nonatomic) NSString *statusUpdateState;
@property (copy, nonatomic) RMModelStatusAppManagedList_ManagedConfiguration *statusConfigState;
@property (copy, nonatomic) NSArray *statusReasons;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 removed:(id)a1 declarationIdentifier:(id)a2 name:(id)a3 externalVersionId:(id)a4 version:(id)a5 shortVersion:(id)a6 state:(id)a7 updateState:(id)a8 configState:(id)a9 reasons:(id)a10;
+ (id)statusItemType;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isArrayValue;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
