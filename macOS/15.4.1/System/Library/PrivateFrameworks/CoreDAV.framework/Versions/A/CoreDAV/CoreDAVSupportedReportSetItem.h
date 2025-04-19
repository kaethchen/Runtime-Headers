@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsReportWithNameSpace:(id)a0 andName:(id)a1;
- (void)addSupportedReport:(id)a0;

@end
