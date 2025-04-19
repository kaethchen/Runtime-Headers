@class NSArray;

@interface AMSUIWebFetchTreatmentAreasAction : AMSUIWebAction

@property (retain) NSArray *namespaceIds;
@property (retain) NSArray *topicIds;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
