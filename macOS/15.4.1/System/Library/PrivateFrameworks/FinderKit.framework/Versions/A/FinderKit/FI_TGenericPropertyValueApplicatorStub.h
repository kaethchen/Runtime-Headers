@interface FI_TGenericPropertyValueApplicatorStub : FI_IPropertyValueApplicator

@property (nonatomic) struct function<int (NSObject *, const TFENodeVector &)> { struct __value_func<int (NSObject *, const TFENodeVector &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } valueApplicator;
@property (nonatomic) struct function<bool (const TFENodeVector &)> { struct __value_func<bool (const TFENodeVector &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } canModifyGetter;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)canModifyNodes:(const void *)a0;
- (int)applyValue:(id)a0 toNodes:(const void *)a1;

@end
