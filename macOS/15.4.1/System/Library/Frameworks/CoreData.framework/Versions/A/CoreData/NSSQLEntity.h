@class NSEntityDescription, NSSQLStoreMappingGenerator, NSMutableDictionary, NSSQLOptLockKey, NSMutableArray, NSSQLEntity_DerivedAttributesExtension, NSString, NSKnownKeysMappingStrategy, NSSQLEntityKey, NSSQLModel, NSSQLPrimaryKey, NSArray;

@interface NSSQLEntity : NSStoreMapping {
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_columnsToFetchNoSubentities;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSMutableArray *_attrColumns;
    _Atomic id _virtualFKs;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    unsigned int _entityID;
    unsigned int _subentityMaxID;
    struct _NSRange { unsigned long long location; unsigned long long length; } _toOneRange;
    NSMutableArray *_uniqueProperties;
    NSMutableArray *_multicolumnUniquenessConstraints;
    _Atomic void *_fetch_entity_plan;
    NSMutableDictionary *_rtreeIndices;
    NSKnownKeysMappingStrategy *_propertyMapping;
    void *_odiousHashHackStorage;
    NSMutableArray *_derivedAttributes;
    NSSQLEntity_DerivedAttributesExtension *_derivedAttributeExtension;
    NSMutableDictionary *_compositeAttributeNameToSQLProperties;
    struct __sqlentityFlags { unsigned char _hasAttributesWithExternalDataReferences : 1; unsigned char _hasAttributesWithFileBackedFutures : 1; unsigned int _reserved : 30; } _sqlentityFlags;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)attributes;
- (id)model;
- (id)attributeColumns;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)entityDescription;
- (id)externalName;
- (id)foreignEntityKeyColumns;
- (id)foreignKeyColumns;
- (id)foreignOrderKeyColumns;
- (id)initWithModel:(id)a0 entityDescription:(id)a1;
- (id)manyToManyRelationships;
- (id)rootEntity;
- (id)tableName;
- (id)toManyRelationships;

@end
