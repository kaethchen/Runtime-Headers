@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)entity;
- (id)initWithEntity:(id)a0;
- (id)subentityColumn;
- (BOOL)isSingleTableEntity;
- (id)primaryKeys;
- (id)propertyMappings;
- (unsigned int)subentityID;

@end
