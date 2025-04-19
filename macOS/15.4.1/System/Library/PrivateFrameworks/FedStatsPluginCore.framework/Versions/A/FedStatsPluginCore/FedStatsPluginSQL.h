@class BMSQLDatabase;

@interface FedStatsPluginSQL : NSObject

@property (retain, nonatomic) BMSQLDatabase *database;

- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (id)runQuery:(id)a0 withError:(id *)a1;

@end
