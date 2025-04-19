@interface WBSHistoryExporter : WBSJSONExporter <WBSHistoryExporterProtocol>

+ (id)dataType;
+ (unsigned long long)schemaVersion;
+ (id)xpcInterface;

- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)addEntryWithURLString:(id)a0 visitTime:(double)a1 title:(id)a2 loadSuccessful:(BOOL)a3 httpGet:(BOOL)a4 redirectSourceURLString:(id)a5 redirectSourceVisitTime:(double)a6 redirectDestinationURLString:(id)a7 redirectDestinationVisitTime:(double)a8 visitCount:(unsigned long long)a9;
- (id)initWithJSONWriter:(id)a0 error:(id *)a1;

@end
