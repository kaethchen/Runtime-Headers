@class REMStore;

@interface REMICloudIsOffDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchICloudIsOffCloudConfigurationPropertiesWithError:(id *)a0;

@end
