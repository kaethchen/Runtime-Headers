@interface FI_TBVDSBulkConfigChangedState : NSObject

@property BOOL sortByChanged;
@property BOOL groupByChanged;
@property BOOL checkChildrenForTagsChanged;
@property (readonly) struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { struct __compressed_pair<fstd::callable_details::callable_holder_base<void> *, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__value_; } __ptr_; } fCallableHolder; } sortByCompletionHandler;
@property (readonly) struct unique_function<void ()> { struct unique_ptr<fstd::callable_details::callable_holder_base<void>, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { struct __compressed_pair<fstd::callable_details::callable_holder_base<void> *, std::default_delete<fstd::callable_details::callable_holder_base<void>>> { void *__value_; } __ptr_; } fCallableHolder; } groupByCompletionHandler;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setGroupByCompletionHandler:(void *)a0;
- (void)setSortByCompletionHandler:(void *)a0;

@end
