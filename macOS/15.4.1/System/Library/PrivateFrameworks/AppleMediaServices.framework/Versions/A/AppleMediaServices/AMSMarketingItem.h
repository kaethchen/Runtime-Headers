@class NSDictionary, NSString, NSArray;

@interface AMSMarketingItem : NSObject

@property (readonly) NSDictionary *artworkDictionary;
@property (readonly) NSString *badge;
@property (readonly) NSString *campaignID;
@property (readonly) NSString *itemID;
@property (readonly) NSArray *itemActions;
@property (readonly, copy) NSDictionary *rawValues;
@property (readonly) NSArray *relatedContent;
@property (readonly) NSString *serviceType;
@property (readonly) NSString *subtitle;
@property (readonly) NSString *templateID;
@property (readonly) NSString *title;
@property (readonly) NSString *type;
@property (readonly) NSString *URLString;
@property (readonly) NSArray *videos;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)endDate;
- (id)tagline;
- (id)abSettings;
- (id)renderingAttributes;
- (id)video;

@end
