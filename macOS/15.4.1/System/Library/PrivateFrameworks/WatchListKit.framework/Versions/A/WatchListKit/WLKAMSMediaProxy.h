@class NSArray, NSDictionary, NSString;

@interface WLKAMSMediaProxy : NSObject

@property (readonly, nonatomic) NSArray *buyParameters;
@property (nonatomic) BOOL hasInAppPurchases;
@property (readonly, nonatomic) NSDictionary *contentRatingsBySystemDictionary;
@property (readonly, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_initializeProperties:(id)a0;

@end
