@class NSString, NSArray;

@interface CADDiagnosticsCalDAVTrafficLogCollector : NSObject <CADDiagnosticLogCollector> {
    NSArray *_orderedInputURLs;
    NSArray *_orderedOutputURLs;
}

@property (nonatomic) BOOL limitedLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldIncludeLogWithFilename:(id)a0;

- (void).cxx_destruct;
- (id)_filteredLogsFromAllLogs:(id)a0 context:(id)a1;
- (id)_limitedLogsFromAllFiles:(id)a0 context:(id)a1;
- (id)_recentLogsFromAllFiles:(id)a0 context:(id)a1;
- (void)collect:(id)a0;
- (void)determineExpectedOutputFiles:(id)a0;
- (id)findAllLogFiles:(id)a0;
- (id)parseFilenameDates:(id)a0 context:(id)a1;

@end
