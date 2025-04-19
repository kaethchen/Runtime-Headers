@class NSDictionary, NSString;

@interface AMSEngagementPlacementInfo : NSObject

@property (readonly) NSDictionary *context;
@property (readonly) NSString *placement;
@property BOOL supportsMultipleMessages;

- (void).cxx_destruct;
- (id)initWithPlacement:(id)a0 context:(id)a1;
- (id)makeRawDictionary;

@end
