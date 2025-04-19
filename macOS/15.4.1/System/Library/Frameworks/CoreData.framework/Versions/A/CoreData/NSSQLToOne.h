@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    BOOL _isVirtual;
}

- (void)dealloc;
- (id)description;
- (void)_setForeignOrderKey:(id)a0;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)foreignKey;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initWithEntity:(id)a0 inverseToMany:(id)a1;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (unsigned int)slot;

@end
