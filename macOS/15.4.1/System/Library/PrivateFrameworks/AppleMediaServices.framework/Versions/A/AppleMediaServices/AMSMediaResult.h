@class NSDictionary, NSArray;

@interface AMSMediaResult : AMSURLResult

@property (readonly) NSDictionary *responseDictionary;
@property (readonly) NSArray *responseDataItems;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;

@end
