@class NSString, FCNewsTabiRecipeScoringConfiguration;

@interface FCNewsTabiRecipeScoringEndpoint : NSObject

@property (readonly, nonatomic) NSString *packageAssetID;
@property (readonly, nonatomic) FCNewsTabiRecipeScoringConfiguration *configuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
