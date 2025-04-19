@class NSString;

@interface FCNewsTabiPersonalizedPaywallsConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *channelIDsOutputName;
@property (nonatomic) BOOL omitHardFollows;
@property (retain, nonatomic) NSString *scoresOutputName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
