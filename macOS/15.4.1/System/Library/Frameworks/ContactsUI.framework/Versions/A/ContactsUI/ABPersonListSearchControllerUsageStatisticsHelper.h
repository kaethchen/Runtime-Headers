@class ABPersonListSearchController;

@interface ABPersonListSearchControllerUsageStatisticsHelper : NSObject

@property unsigned long long lastSearchStringLength;
@property (weak) ABPersonListSearchController *searchController;

+ (id)helperWithSearchController:(id)a0;

- (void).cxx_destruct;
- (void)searchConfiguration:(id)a0 willSearchForString:(id)a1;
- (BOOL)shouldTraceString:(id)a0;

@end
