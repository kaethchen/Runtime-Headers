@class NSString, FCNewsTabiRecipeDiversificationConfiguration;

@interface FCNewsTabiRecipeDiversificationEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationConfiguration *configuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
