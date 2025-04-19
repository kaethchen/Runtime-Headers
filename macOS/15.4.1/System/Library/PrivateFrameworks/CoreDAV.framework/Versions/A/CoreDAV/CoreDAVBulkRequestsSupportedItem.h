@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *supported;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
