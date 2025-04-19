@class NSManagedObjectContext, NSString, NSMutableDictionary;

@interface CNCDRecordSaveCache : NSObject {
    NSManagedObjectContext *_context;
    NSString *_entityName;
    NSMutableDictionary *_recordsByIdentifier;
}

+ (id)predicateForContactsWithIdentifiers:(id)a0;
+ (id)predicateForContainersWithIdentifiers:(id)a0;
+ (id)predicateForGroupsWithIdentifiers:(id)a0;
+ (id)predicateForIdentifiers:(id)a0 entityName:(id)a1;

- (void).cxx_destruct;
- (void)addRecord:(id)a0;
- (id)recordsForIdentifiers:(id)a0;
- (void)enumerateCoreDataContactsMatchingContacts:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateCoreDataContainersMatchingContainers:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateCoreDataGroupsMatchingGroups:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)fetchAllIdentifiers:(id)a0 error:(id *)a1;
- (id)fetchIndexedRecordsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)fetchRecordsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)fetchRecordsWithLinkIdentifiers:(id)a0 error:(id *)a1;
- (id)initWithContext:(id)a0 entityName:(id)a1;
- (id)recordForIdentifier:(id)a0;

@end
