@class NSSet, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVMultiStatusItem : CoreDAVItem

@property (readonly, nonatomic) NSSet *responses;
@property (retain, nonatomic) NSMutableArray *orderedResponses;
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addResponse:(id)a0;

@end
