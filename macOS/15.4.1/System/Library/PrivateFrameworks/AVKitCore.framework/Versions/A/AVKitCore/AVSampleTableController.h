@class NSCache, NSString;

@interface AVSampleTableController : NSObject <NSCacheDelegate>

@property (readonly, nonatomic) NSCache *sampleTableCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

@end
