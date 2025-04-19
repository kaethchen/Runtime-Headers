@class NSString, NSSQLForeignKey;

@interface NSSQLForeignOrderKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
}

- (void)dealloc;
- (id)name;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)foreignKey;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;
- (id)initWithEntity:(id)a0 foreignKey:(id)a1;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)toOneRelationship;

@end
