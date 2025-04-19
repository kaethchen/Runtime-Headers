@class NSPersistentContainer;

@interface CSUSearchableKnowledgeObjectStore : NSObject

@property (retain) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (id)initExistingDB:(id)a0 error:(id *)a1;
- (id)entityForIdentifier:(unsigned long long)a0 idType:(short)a1 error:(id *)a2;
- (BOOL)countEntries:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)deleteAllEntities:(id *)a0;
- (BOOL)deleteEntityForIdentifier:(unsigned long long)a0 idType:(short)a1 error:(id *)a2;
- (BOOL)deleteEntityForIdentifier:(unsigned long long)a0 idType:(short)a1 locale:(id)a2 error:(id *)a3;
- (id)entityForIdentifier:(unsigned long long)a0 idType:(short)a1 locale:(id)a2 error:(id *)a3;
- (id)fetchEntitiesWithPredicate:(id)a0 error:(id *)a1;
- (BOOL)fetchMetadataToMemory:(id *)a0;
- (id)getDbObjectByIdentifier:(unsigned long long)a0 idType:(short)a1 context:(id)a2 error:(id *)a3;
- (id)getStore:(id *)a0;
- (int)getTaxonomyVersion:(id *)a0;
- (id)initDB:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)initDB:(id)a0 atURL:(id)a1 error:(id *)a2;
- (id)initDB:(id)a0 error:(id *)a1;
- (id)initExistingDB:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)saveDatabase:(id)a0 error:(id *)a1;
- (BOOL)saveMetadataToStore:(id *)a0;
- (BOOL)setTaxonomyVersion:(int)a0 error:(id *)a1;
- (BOOL)storeEntity:(id)a0 uniqueIdWriteback:(unsigned long long *)a1 error:(id *)a2;

@end
