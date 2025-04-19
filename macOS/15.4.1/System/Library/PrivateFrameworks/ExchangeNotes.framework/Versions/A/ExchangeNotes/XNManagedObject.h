@class NSString, NSMutableDictionary;

@interface XNManagedObject : NSObject

@property (copy, nonatomic) NSString *objectIDURIString;
@property (retain, nonatomic) NSMutableDictionary *properties;
@property (retain, nonatomic) NSMutableDictionary *cachedProperties;
@property (retain, nonatomic) NSMutableDictionary *toOneRelationships;
@property (retain, nonatomic) NSMutableDictionary *toManyRelationships;
@property (nonatomic) BOOL hasUnsavedChanges;

- (void).cxx_destruct;
- (BOOL)saveWithError:(id *)a0;
- (BOOL)deleteWithError:(id *)a0;
- (id)initWithObjectIDURIString:(id)a0;
- (id)initWithObjectIDURIString:(id)a0 cachedProperties:(id)a1;
- (id)managedObjectIDURIStringArrayForRelationshipKey:(id)a0;
- (id)managedObjectIDURIStringForRelationshipKey:(id)a0;
- (id)propertyValueForKey:(id)a0;
- (void)setManagedObjectIDURIString:(id)a0 forRelationshipKey:(id)a1;
- (void)setManagedObjectIDURIStringArray:(id)a0 forRelationshipKey:(id)a1;
- (void)setPropertyValue:(id)a0 forKey:(id)a1;

@end
