@class _ANEModel;

@interface _ANEVirtualModel : NSObject

@property (nonatomic) long long refcount;
@property (retain, nonatomic) _ANEModel *model;

+ (id)new;
+ (void)initialize;
+ (id)objectWithModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)addCachedReference;
- (BOOL)removeCachedReference;

@end
