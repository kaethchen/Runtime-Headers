@class CoreDAVLeafItem, CoreDAVItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *status;
@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) CoreDAVErrorItem *errorItem;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
