@class CoreDAVLeafItem, CoreDAVItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) CoreDAVLeafItem *descriptionItem;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
