@class REMStore;

@interface REMAppStoreDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchAppStoreCloudConfigurationPropertiesWithError:(id *)a0;
- (id)fetchCreatedOrCompletedRemindersCountFromDate:(id)a0 toDate:(id)a1 error:(id *)a2;

@end
