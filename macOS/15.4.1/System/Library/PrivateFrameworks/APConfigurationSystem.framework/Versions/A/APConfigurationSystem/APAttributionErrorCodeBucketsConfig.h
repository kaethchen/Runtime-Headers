@class NSDictionary;

@interface APAttributionErrorCodeBucketsConfig : APConfiguration

@property (readonly, nonatomic) NSDictionary *clientCodeBuckets;
@property (readonly, nonatomic) NSDictionary *serverCodeBuckets;

+ (id)path;

@end
