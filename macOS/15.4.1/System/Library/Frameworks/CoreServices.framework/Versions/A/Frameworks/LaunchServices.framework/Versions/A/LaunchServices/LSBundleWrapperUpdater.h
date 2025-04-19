@class NSURL, LSBundleWrapperStagingReceipt, NSError;

@interface LSBundleWrapperUpdater : NSObject <LSBundleWrapperMutation> {
    struct optional<LaunchServices::BundleWrapperUpdateOperation> { union { char __null_state_; struct BundleWrapperUpdateOperation { void /* function */ **_vptr$BundleWrapperMutationOperation; NSURL *_mutationParentDirectory; NSURL *_stagingDirectory; NSURL *_createdContainerURL; LSBundleWrapperStagingReceipt *_shoveResult; NSError *_shoveError; BOOL _finalized; NSURL *_existingWrapperURL; NSURL *_finalizedURL; } __val_; } ; BOOL __engaged_; } _updateOperation;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)finalizeWithError:(id *)a0;
- (id)initForExistingWrapperAtURL:(id)a0 error:(id *)a1;
- (id)wrappedBundleURL;
- (id)writeContainerContents:(id /* block */)a0;

@end
