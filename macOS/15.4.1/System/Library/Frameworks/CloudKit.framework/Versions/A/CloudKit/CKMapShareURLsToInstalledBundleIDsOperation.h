@class CKMapShareURLsToInstalledBundleIDsOperationInfo, NSMutableDictionary, NSArray, NSString, NSMutableArray;
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks;

@interface CKMapShareURLsToInstalledBundleIDsOperation : CKOperation <CKMapShareURLsToInstalledBundleIDsOperationCallbacks>

@property (retain, nonatomic) NSMutableArray *specialURLs;
@property (retain, nonatomic) NSMutableArray *genericURLs;
@property (retain, nonatomic) NSMutableDictionary *errorsByURL;
@property (nonatomic) BOOL returnLocalBundlesOnly;
@property (readonly, nonatomic) id<CKMapShareURLsToInstalledBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKMapShareURLsToInstalledBundleIDsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareURLs;
@property (copy, nonatomic) id /* block */ perShareURLBlock;
@property (copy, nonatomic) id /* block */ mapBundleIDsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (id)getStaticBundleIDsForURLSlug:(id)a0 withKey:(id)a1;
- (void)handleBundleIDsFetchedForURL:(id)a0 appBundleIDs:(id)a1 daemonBundleIDs:(id)a2 error:(id)a3;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithShareURLs:(id)a0 returnLocalBundlesOnly:(BOOL)a1;
- (void)performCKOperation;
- (id)selectLocalBundleIDs:(id)a0;

@end
