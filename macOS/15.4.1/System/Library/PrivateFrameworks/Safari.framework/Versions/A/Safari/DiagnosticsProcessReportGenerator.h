@class NSArray;

@interface DiagnosticsProcessReportGenerator : NSObject {
    NSArray *_processes;
}

- (void).cxx_destruct;
- (id)askUserPermissionToDiscloseURLs;
- (void)_appendProcessIdentifiersOfTabs:(id)a0 toDictionary:(id)a1;
- (void)_calculateAverage:(double *)a0 andStandardDeviation:(double *)a1 forKey:(id)a2;
- (id)_initWithLastSession:(id)a0 skipProcessDataCollection:(BOOL)a1;
- (void)_scoreElementsForKey:(id)a0;
- (id)filteredArrayRepresentationExceptForURLs:(id)a0;
- (id)initWithLastSession:(id)a0;
- (id)selectMostInterestingURLs:(unsigned long long)a0;

@end
