@class NSString, ASCLockupView;

@interface SearchUIStoreButtonItemViewController : SearchUIButtonItemViewController <ASCLockupViewDelegate>

@property (retain, nonatomic) ASCLockupView *lockupView;
@property BOOL startedInstalling;
@property (retain, nonatomic) NSString *adamID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lockupViewGroup;
+ (id)lockupCache;

- (id)init;
- (void).cxx_destruct;
- (id)environment;
- (id)storeButtonItem;
- (id)buttonItemView;
- (id)currentStoreButtonIdentifier;
- (int)currentStoreButtonIdentifierType;
- (void)lockupView:(id)a0 appStateDidChange:(id)a1;
- (void)lockupView:(id)a0 didFailRequestWithError:(id)a1;
- (void)lockupViewDidFinishRequest:(id)a0;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)a0;
- (id)metricsActivityForLockupView:(id)a0 toPerformActionOfOffer:(id)a1;
- (void)updateWithButtonItem:(id)a0 buttonItemViewType:(unsigned long long)a1;

@end
