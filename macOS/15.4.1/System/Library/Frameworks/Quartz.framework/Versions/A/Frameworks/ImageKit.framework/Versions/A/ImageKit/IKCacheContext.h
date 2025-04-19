@interface IKCacheContext : NSObject

@property (retain) id cacheManager;
@property (retain) id glRenderer;
@property (readonly) id glContext;

- (void)dealloc;
- (void)finalize;

@end
