@class SKGProcessorConnection;

@interface SKGAttributeProcessor : NSObject {
    SKGProcessorConnection *_connection;
}

+ (id)sharedProcessor;
+ (id)sharedImporterProcessor;

- (id)init;
- (void).cxx_destruct;
- (id)processorAttributesForRecord:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 isUpdate:(BOOL)a3;
- (void)setTurboMode:(BOOL)a0;
- (void)collectDiagnostics:(id)a0 completion:(id /* block */)a1;
- (void)updateCheckedInClientWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initForImporter;
- (id)addUpdaterAttributesForMDPlistRecord:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a0 bundleID:(id)a1;
- (void)checkProcessingReportForBundleIdentifier:(id)a0 flags:(unsigned long long)a1 timeout:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)eventsJournalsStats;
- (void)getGenerationProgressReportForProtectionClasses:(id)a0 processorFlags:(unsigned long long)a1 reportHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)getHistoricalProgressReportsForDateInterval:(id)a0 reportHandler:(id /* block */)a1;
- (void)getProgressReportWithVerbosity:(long long)a0 processorFlags:(unsigned long long)a1 protectionClasses:(id)a2 reportHandler:(id /* block */)a3;
- (void)processRecord:(id)a0 referenceIdentifier:(id)a1 protectionClass:(id)a2 processorFlags:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
