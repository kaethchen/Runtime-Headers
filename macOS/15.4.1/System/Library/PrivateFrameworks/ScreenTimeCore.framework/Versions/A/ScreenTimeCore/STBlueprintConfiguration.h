@class NSString, NSData, STBlueprint;
@protocol STSerializableManagedObject;

@interface STBlueprintConfiguration : NSManagedObject <STSyncableSubObject, STUniquelySerializableManagedObject>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSData *payloadPlist;
@property (retain, nonatomic) STBlueprint *blueprint;
@property (readonly) id<STSerializableManagedObject> syncableRootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blueprintConfigurationTypeForDeclaration:(id)a0;
+ (id)blueprintConfigurationTypeForDeclarationType:(id)a0;
+ (id)cemConfigurationIdentifierWithType:(id)a0 forUser:(id)a1;
+ (Class)cemDeclarationClassForConfigurationType:(id)a0;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchRequestMatchingBlueprintsConfigurationForBlueprint:(id)a0 ofType:(id)a1 includeTombstones:(BOOL)a2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)a0 ofType:(id)a1;

- (id)dictionaryRepresentation;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (id)_createIdentifierSubstringForBlueprintType:(id)a0 organization:(id)a1 configType:(id)a2 identifier:(id)a3 error:(id)a4;
- (id)_organizationStr:(id)a0;
- (BOOL)_validateBlueprint:(id)a0;
- (BOOL)_validateIdentifier:(id)a0;
- (id)cemConfiguration;
- (void)setCemConfiguration:(id)a0;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;

@end
