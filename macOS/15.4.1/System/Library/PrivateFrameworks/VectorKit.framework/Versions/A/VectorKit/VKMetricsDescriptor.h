@interface VKMetricsDescriptor : NSObject

@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } styleManager;
@property (nonatomic) long long carDisplayType;
@property (nonatomic) long long shieldSize;
@property (nonatomic) long long labelScaleFactor;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
