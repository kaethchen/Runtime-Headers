@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)getTotalFailureError;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;
- (id)parseHints;
- (void)updateMultiStatusFromResponse;

@end
