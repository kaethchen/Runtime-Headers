@class WFDatabase;

@interface WFManagedObjectContext : NSManagedObjectContext

@property (weak, nonatomic) WFDatabase *database;

- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void)logFaultForIncompatibleSortDescriptorsInFetchRequest:(id)a0;

@end
