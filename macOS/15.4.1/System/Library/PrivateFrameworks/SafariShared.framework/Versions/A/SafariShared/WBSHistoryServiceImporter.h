@class NSMutableArray, WBSHistoryServiceDatabase;

@interface WBSHistoryServiceImporter : NSObject <WBSHistoryImporterDelegate> {
    NSMutableArray *_visits;
}

@property (readonly, retain, nonatomic) WBSHistoryServiceDatabase *database;
@property (readonly, nonatomic) unsigned long long visitTimePrecision;

- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)_submitVisitsWithCompletionHandler:(id /* block */)a0;
- (void)addVisitWithURLString:(id)a0 visitTime:(double)a1 title:(id)a2 loadSuccessful:(BOOL)a3 httpGet:(BOOL)a4 redirectSourceURLString:(id)a5 redirectSourceVisitTime:(double)a6 visitCount:(unsigned long long)a7;
- (id)initWithDatabase:(id)a0 visitTimePrecision:(unsigned long long)a1;

@end
