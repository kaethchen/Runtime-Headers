@class CoreDAVItem;

@interface CoreDAVSupportedReportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *report;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
