@class NSString, NSArray, NSXMLElement, PKDistribution;

@interface PKDistributionChoice : NSObject {
    PKDistribution *_distribution;
    NSString *_identifier;
    NSArray *_choiceElements;
    NSXMLElement *_referencingElement;
    NSArray *_pkgRefIdentifiers;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)identifier;
- (void)setIdentifier:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (unsigned long long)countOfChildren;
- (void)insertObject:(id)a0 inChildrenAtIndex:(unsigned long long)a1;
- (id)objectInChildrenAtIndex:(unsigned long long)a0;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)distribution;
- (void)setValue:(id)a0 forAttributeName:(id)a1;
- (id)valueForAttributeName:(id)a0;
- (BOOL)_validateChoice;
- (BOOL)validatePackageReference:(id *)a0 error:(id *)a1;
- (id)_initWithDistribution:(id)a0 referencingElement:(id)a1;
- (void)_invalidatePkgRefIdentifiers;
- (id)_pkgRefIdentifiers;
- (void)addPackageReferencesObject:(id)a0;
- (unsigned long long)countOfPackageReferences;
- (id)enumeratorOfPackageReferences;
- (id)memberOfPackageReferences:(id)a0;
- (id)packageIdentifiers;
- (void)removePackageReferencesObject:(id)a0;
- (id)scriptForAttributeName:(id)a0;
- (id)scriptForAttributeName:(id)a0 createIfNeeded:(BOOL)a1;
- (BOOL)validateIdentifier:(id *)a0 error:(id *)a1;

@end
