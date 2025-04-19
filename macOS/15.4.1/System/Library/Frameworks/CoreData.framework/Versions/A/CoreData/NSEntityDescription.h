@class NSData, NSString, NSArray, NSMutableDictionary, NSDictionary, NSExpression, NSManagedObjectModel;

@interface NSEntityDescription : NSObject <NSSecureCoding, NSCoding, NSCopying, NSFastEnumeration> {
    int _cd_rc;
    _Atomic id _snapshotClass;
    NSString *_versionHashModifier;
    _Atomic id _versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    _Atomic Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_propertyRanges;
    struct __entityDescriptionFlags { unsigned char _isAbstract : 1; unsigned char _shouldValidateOnSave : 1; unsigned char _oldIsImmutable : 1; unsigned char _isFlattened : 1; unsigned char _skipValidation : 1; unsigned char _hasPropertiesIndexedBySpotlight : 1; unsigned char _hasPropertiesStoredInTruthFile : 1; unsigned char _rangesAreInDataBlob : 1; unsigned char _hasAttributesWithExternalDataReferences : 1; unsigned char _hasNonstandardPrimitiveProperties : 2; unsigned char _hasUniqueProperties : 1; unsigned char _hasChildrenWithUniqueProperties : 1; unsigned char _validationUniqueProperties : 1; unsigned char _isPersistentHistoryEntity : 1; unsigned char _hasAttributesWithFileBackedFutures : 1; unsigned char _reservedEntityDescription : 8; } _entityDescriptionFlags;
    _Atomic char _isImmutable;
    struct _ExtraEntityIVars { id x0; id x1; _Atomic id x2; id x3; id x4; id x5; struct os_unfair_lock_s { unsigned int x0; } x6; int x7; void *x8; } *_extraIvars;
    NSMutableDictionary *_userInfo;
    id _flattenedSubentities;
    id **_kvcPropertyAccessors;
    long long _modelsReferenceIDForEntity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (copy) NSString *managedObjectClassName;
@property (copy) NSString *name;
@property (getter=isAbstract) BOOL abstract;
@property (readonly, copy) NSDictionary *subentitiesByName;
@property (retain) NSArray *subentities;
@property (readonly) NSEntityDescription *superentity;
@property (readonly, copy) NSDictionary *propertiesByName;
@property (retain) NSArray *properties;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly, copy) NSDictionary *attributesByName;
@property (readonly, copy) NSDictionary *relationshipsByName;
@property (readonly, copy) NSData *versionHash;
@property (copy) NSString *versionHashModifier;
@property (copy) NSString *renamingIdentifier;
@property (copy) NSArray *indexes;
@property (retain) NSArray *uniquenessConstraints;
@property (retain) NSArray *compoundIndexes;
@property (retain, nonatomic) NSExpression *coreSpotlightDisplayNameExpression;

+ (void)initialize;
+ (id)entityForName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertNewObjectForEntityForName:(id)a0 inManagedObjectContext:(id)a1;
+ (id)_MOClassName;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)_initWithName:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeKeys;
- (id)inverseForRelationshipKey:(id)a0;
- (id)toManyRelationshipKeys;
- (id)toOneRelationshipKeys;
- (BOOL)_isSchemaEqual:(id)a0;
- (void)_setIsEditable:(BOOL)a0;
- (BOOL)_skipValidation;
- (void)_addProperty:(id)a0;
- (BOOL)isKindOfEntity:(id)a0;
- (void)_addFactoryToRetainList:(id)a0;
- (void)_addSubentity:(id)a0;
- (void)_createCachesAndOptimizeState;
- (void)_flattenProperties;
- (BOOL)_isEditable;
- (void *)_leopardStyleAttributesByName;
- (void *)_leopardStyleRelationshipsByName;
- (id)_localRelationshipNamed:(id)a0;
- (id)_newMappingForPropertiesOfRange:(unsigned int)a0;
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned long long)a0;
- (unsigned long long)_offsetRelationshipIndex:(unsigned long long)a0 fromSuperEntity:(id)a1 andIsToMany:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; } *)_propertyRangesByType;
- (id)_propertySearchMapping;
- (id)_propertyWithRenamingIdentifier:(id)a0;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (BOOL)_subentitiesIncludes:(id)a0;
- (void)_throwIfNotEditable;
- (id)_uniquenessConstraintsAsFetchIndexes;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 uniquedMappings:(id)a5 entities:(id)a6;
- (id)elementID;
- (id)keypathsToPrefetchForDeletePropagation;
- (BOOL)performPostDecodeValidationInModel:(id)a0 error:(id *)a1;
- (id)relationshipsWithDestinationEntity:(id)a0;
- (void)setElementID:(id)a0;

@end
