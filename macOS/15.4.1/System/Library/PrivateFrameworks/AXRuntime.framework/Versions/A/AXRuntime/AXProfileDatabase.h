@class NSMutableArray;

@interface AXProfileDatabase : NSObject {
    NSMutableArray *_entries;
}

+ (id)sharedDatabase;

- (id)init;
- (void).cxx_destruct;
- (void)registerEntry:(id)a0;
- (id)debugStatistics;
- (id)transactionSummary;

@end
