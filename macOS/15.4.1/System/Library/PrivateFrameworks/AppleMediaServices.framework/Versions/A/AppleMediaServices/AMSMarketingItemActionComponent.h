@class NSURL, NSString, NSDictionary;

@interface AMSMarketingItemActionComponent : NSObject

@property (readonly) NSURL *artworkURL;
@property (readonly) NSString *description;
@property (readonly) NSDictionary *rawValues;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
