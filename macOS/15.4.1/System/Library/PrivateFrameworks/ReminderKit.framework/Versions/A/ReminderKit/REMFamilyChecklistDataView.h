@class REMStore;

@interface REMFamilyChecklistDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchFamilyGroceryListEligibilityForFamilyChecklistWithLocale:(id)a0 error:(id *)a1;
- (id)fetchSharedGroceryListsWithCommonSharees:(id)a0 error:(id *)a1;

@end
