@interface PCRuntimeParameters : NSObject

+ (long long)contextPrefetchLimit;
+ (void)rateLimitRequestsInFeed:(float)a0 inArticle:(float)a1 betweenArticle:(float)a2 videoInArticle:(float)a3 nativeInFeed:(float)a4 nativeInArticle:(float)a5;
+ (void)setContextPrefetchLimit:(long long)a0;
+ (void)rateLimitRequests:(float)a0;

@end
