@class NSString, ICQDynamicUIPresenter, ICQOffer, ICQUpgradeFlowOptions, ICQLink;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQUpgradeFlowManager : NSObject <ICQDynamicUIPresenterDelegate>

@property (retain, nonatomic) ICQDynamicUIPresenter *dynamicUIPresenter;
@property (readonly, nonatomic) ICQOffer *offer;
@property (retain, nonatomic) ICQLink *icqLink;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (copy, nonatomic) NSString *presentingSceneIdentifier;
@property (copy, nonatomic) NSString *presentingSceneBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginRemoteFlow;
- (void)_beginRemoteFlowWithURL:(id)a0;
- (void)_presentDynamicUIWithWindow:(id)a0 isRemoteFlow:(BOOL)a1;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;
- (void)beginFlowWithPresentingViewController:(id)a0;
- (void)beginFlowWithWindow:(id)a0 isRemoteFlow:(BOOL)a1;
- (void)beginRemoteFlowWithParentWindow:(id)a0;
- (void)beginRemoteUpgradeFlowWithICQLink:(id)a0;
- (void)beginRemoteUpgradeFlowWithICQLink:(id)a0 presenter:(id)a1;
- (void)dynamicUIPresenterDidCancel:(id)a0 error:(id)a1;
- (void)dynamicUIPresenterDidComplete:(id)a0;
- (id)initWithOffer:(id)a0;

@end
