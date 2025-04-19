@interface FI_TTagOperation : FI_IAsyncNodeOperation {
    struct shared_ptr<TTagsTask> { struct TTagsTask *__ptr_; struct __shared_weak_count *__cntrl_; } _task;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)runOperation;
- (int)cancelOperation;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (void)configureOperationRecord:(void *)a0 forIndex:(unsigned long long)a1;
- (id)initWithNodes:(const void *)a0 forTask:(const void *)a1;
- (int)startSubOperation:(unsigned int)a0;

@end
