@class NSString;

@interface DEPatternSetting : DEParameter

@property struct shared_ptr<siri::dialogengine::PatternSetting> { struct PatternSetting *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (readonly) NSString *defaultValueFromSetting;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getSharedPtr;
- (id)initWithSharedPtr:(void *)a0;

@end
