@class NSSet, NSString, NSOperationQueue, NSURL;

@interface ICBundleContainerFilePresenter : NSObject <NSFilePresenter>

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) id /* block */ subitemBundleDidChange;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)presentedSubitemDidChangeAtURL:(id)a0;

@end
