@class NSArray, NSMutableDictionary, NSPredicate, NSMutableArray, NSManagedObjectContext;

@interface ABContactFetcher : NSObject {
    NSMutableArray *_records;
    NSMutableDictionary *_linkedContactsById;
}

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (copy) NSArray *affectedStores;
@property (copy) NSPredicate *fetchPredicate;
@property BOOL includeGroups;
@property BOOL includeLinkedContacts;
@property BOOL unifyContacts;
@property (readonly, copy) NSArray *resultRecords;

+ (id)linkedContactsSortDescriptors;

- (id)init;
- (void).cxx_destruct;
- (id)contactRelationshipKeyPathsForPrefetching;
- (id)unifyContacts:(id)a0;
- (void)fetchContacts;
- (id)fetchLinkedContactsForContacts:(id)a0;
- (void)buildContactsByLinkIdFromContactResults:(id)a0;
- (id)contactPropertiesToFetch;
- (void)fetchGroups;
- (void)fetchRecords;
- (id)fetchRecordsWithEntityName:(id)a0 affectedStores:(id)a1 propertiesToFetch:(id)a2 relationshipKeyPathsForPrefetching:(id)a3 sortDescriptors:(id)a4 predicate:(id)a5;
- (id)fetchRecordsWithEntityName:(id)a0 propertiesToFetch:(id)a1 relationshipKeyPathsForPrefetching:(id)a2 sortDescriptors:(id)a3;
- (id)mutableContactsForLinkId:(id)a0;
- (void)resetResults;
- (id)resultContactsForLinkId:(id)a0;

@end
