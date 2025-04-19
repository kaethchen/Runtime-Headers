@class NSArray, NSSet, NSError;

@interface PodcastsFoundation.BatchFeedRequestController : NSObject

+ (void)fetchOutOfDateShowUUIDsWith:(NSArray *)a0 completionHandler:(void (^)(NSSet *, NSError *))a1;
+ (void)fetchOutOfDateShowUUIDsWithIncludeImplicit:(BOOL)a0 completionHandler:(void (^)(NSSet *, NSError *))a1;

- (id)init;
- (void).cxx_destruct;

@end
