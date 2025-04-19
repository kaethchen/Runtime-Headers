@interface LSBundleWrapperCreator : NSObject <LSBundleWrapperMutation> {
    struct unique_ptr<LaunchServices::BundleWrapperMutationOperation, std::default_delete<LaunchServices::BundleWrapperMutationOperation>> { struct __compressed_pair<LaunchServices::BundleWrapperMutationOperation *, std::default_delete<LaunchServices::BundleWrapperMutationOperation>> { struct BundleWrapperMutationOperation *__value_; } __ptr_; } _creationOperation;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)finalizeWithError:(id *)a0;
- (id)initForTargetDirectoryURL:(id)a0 consultingPlaceholderAtURL:(id)a1;
- (id)initTargetingFinalURL:(id)a0;
- (id)writeContainerContents:(id /* block */)a0;

@end
