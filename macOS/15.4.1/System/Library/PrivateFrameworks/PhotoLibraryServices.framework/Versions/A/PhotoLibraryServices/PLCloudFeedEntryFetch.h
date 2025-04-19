@class NSPredicate, NSEntityDescription;

@interface PLCloudFeedEntryFetch : NSObject

@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSEntityDescription *entity;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 entity:(id)a1;

@end
