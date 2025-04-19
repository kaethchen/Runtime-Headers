@class CoreDAVItem;

@interface CoreDAVSetItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
