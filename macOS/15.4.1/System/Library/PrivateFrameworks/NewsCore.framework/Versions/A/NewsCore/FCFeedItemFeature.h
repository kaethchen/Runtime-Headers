@class NSString;

@interface FCFeedItemFeature : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *topicID;
@property (readonly, nonatomic) BOOL queryable;

+ (id)featureForAllArticles;
+ (id)featureForTopicID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 key:(id)a1;

@end
