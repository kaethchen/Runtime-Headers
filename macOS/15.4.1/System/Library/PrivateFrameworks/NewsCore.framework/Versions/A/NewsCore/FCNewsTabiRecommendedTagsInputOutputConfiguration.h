@class NSString;

@interface FCNewsTabiRecommendedTagsInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *recommendationsOutputName;
@property (retain, nonatomic) NSString *recommendationsScoreOutputName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
