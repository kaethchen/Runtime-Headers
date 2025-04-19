@class NSSet, NSString, NSURL, NSOperationQueue;

@interface HIFilePresenter : NSObject <NSFilePresenter> {
    struct OpaqueWindowPtr { } *fWindow;
    struct __CFURL { } *fURL;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (id)initForWindow:(struct OpaqueWindowPtr { } *)a0 withURL:(struct __CFURL { } *)a1;

@end
