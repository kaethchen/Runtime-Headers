@class NSString;

@interface FCPeopleAlsoReadConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long seedMaxCount;
@property (readonly, nonatomic) long long seedMaxAgeSeconds;
@property (readonly, nonatomic) long long seedMaxIntervalSinceLastReadSeconds;
@property (readonly, copy, nonatomic) NSString *candidateArticleListSuffix;
@property (readonly, nonatomic) long long candidateArticleListMaxCachedAgeSeconds;
@property (readonly, nonatomic) long long candidateMaxAgeSeconds;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)candidateArticleListIDForSeedArticleID:(id)a0 storeFrontID:(id)a1;

@end
