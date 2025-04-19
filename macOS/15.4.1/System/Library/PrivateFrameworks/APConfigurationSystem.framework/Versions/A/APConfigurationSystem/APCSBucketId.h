@class NSArray, NSDictionary;

@interface APCSBucketId : APConfiguration

@property (readonly, nonatomic) NSArray *aggregationWindows;
@property (readonly, nonatomic) NSDictionary *bucketIds;

+ (id)path;

@end
