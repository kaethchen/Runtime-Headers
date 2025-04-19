@class NSDictionary, NSArray;

@interface WPLinkFilteringData : NSObject

@property (readonly, nonatomic) NSDictionary *scopedQueryParameters;
@property (readonly, nonatomic) NSArray *rules;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRules:(id)a0;
- (id)initWithQueryParameters:(id)a0;
- (id)initWithQueryParameters:(id)a0 domains:(id)a1 paths:(id)a2;

@end
