@class NSString, NSManagedObjectContext;
@protocol CNCDIOSLegacyIdentifierRegistration;

@interface CNCDDatabaseLegacyIdentifierRebuilder : NSObject

@property (retain, nonatomic) NSString *namespaceIdentifier;
@property (retain, nonatomic) id<CNCDIOSLegacyIdentifierRegistration> registrar;
@property (retain, nonatomic) NSManagedObjectContext *moc;

- (void).cxx_destruct;
- (id)allABCDRecordsForEntityName:(id)a0 error:(id *)a1;
- (id)allOwnedObjectsWithError:(id *)a0;
- (void)assignABCDRecords:(id)a0 legacyIdentifiersFromSet:(id)a1;
- (void)assignOwnedObjects:(id)a0 legacyIdentifiersFromSet:(id)a1;
- (id)initWithRegistrar:(id)a0 namespaceIdentifier:(id)a1 managedObjectContext:(id)a2;
- (BOOL)rebuild:(id *)a0;

@end
