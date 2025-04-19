@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (void)dealloc;
- (id)name;
- (id)destinationEntity;
- (void)_setForeignOrderKey:(id)a0;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)correlationTableName;
- (id)foreignKey;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)sourceEntity;

@end
