@class NSManagedObjectContext;

@interface CNCDTestManagedObjectContextSession : NSObject

@property (readonly) NSManagedObjectContext *context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)fetchContactsMatchingPredicate:(id)a0;
- (id)executeFetchRequest:(id)a0;
- (id)fetchContainersMatchingPredicate:(id)a0;
- (id)fetchGroupsMatchingPredicate:(id)a0;
- (id)fetchInfosMatchingPredicate:(id)a0;
- (id)insertContactIntoStore:(id)a0 configuration:(id /* block */)a1;
- (id)insertContainerIntoStore:(id)a0 configuration:(id /* block */)a1;
- (id)insertGroupIntoStore:(id)a0 configuration:(id /* block */)a1;
- (id)insertInfoIntoStore:(id)a0 configuration:(id /* block */)a1;
- (id)insertPhoneNumberWithConfiguration:(id /* block */)a0;
- (id)updateContact:(id)a0 byAddingPhoneNumberWithConfiguration:(id /* block */)a1;

@end
