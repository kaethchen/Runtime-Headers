@class NSArray, NSDate;

@interface NDTodayFeedConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, copy, nonatomic) NSArray *topStoriesArticleIDs;
@property (readonly, copy, nonatomic) NSArray *topStoriesPackageURLs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPublishDate:(id)a0 topStoriesArticleIDs:(id)a1 topStoriesPackageURLs:(id)a2;

@end
