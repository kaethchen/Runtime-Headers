@class NSString, NSDictionary, NSDate;

@interface PGCuratedLibraryFTEMetricEvent : PGAbstractMetricEvent {
    long long _librarySizeRange;
    NSDate *_migrationDate;
    NSString *_identifier;
    NSDictionary *_payload;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)payload;
- (BOOL)shouldReportMetrics;
- (id)initWithLibrarySizeRange:(long long)a0 migrationDate:(id)a1;

@end
