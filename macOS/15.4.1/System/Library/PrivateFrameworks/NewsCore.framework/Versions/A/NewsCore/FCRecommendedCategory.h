@class NSString, NSArray;

@interface FCRecommendedCategory : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *topicTagIDs;
@property (readonly, nonatomic) NSArray *channelTagIDs;
@property (readonly, nonatomic) NSArray *subcategories;
@property (readonly, nonatomic) NSArray *curatedTagIDs;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 curatedTagIDs:(id)a2 recommendedTopicTagIDs:(id)a3 recommendedChannelTagIDs:(id)a4 subcategories:(id)a5;

@end
