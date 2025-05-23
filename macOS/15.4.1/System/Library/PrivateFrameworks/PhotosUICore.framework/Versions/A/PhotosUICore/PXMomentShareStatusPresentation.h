@class PXMomentShareStatus, NSString, PXCPLUIStatusProvider;
@protocol PXDisplayMomentShare, PXCMMInvitation;

@interface PXMomentShareStatusPresentation : PXObservable <PXChangeObserver> {
    PXCPLUIStatusProvider *_statusProvider;
}

@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) PXMomentShareStatus *momentShareStatus;
@property (copy, nonatomic) NSString *assetsTitle;
@property (copy, nonatomic) NSString *assetsSaveStatusTitle;
@property (copy, nonatomic) NSString *expirationTitle;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *idleTitle;
@property (copy, nonatomic) NSString *pauseTitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertTitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property (copy, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) NSString *byline;
@property (nonatomic) float activityProgress;
@property (nonatomic) long long numberOfAssetsNotCopied;
@property (nonatomic) long long numberOfAssetsCopied;
@property (nonatomic) BOOL isPaused;
@property (copy, nonatomic) NSString *pauseStatusDescription;
@property (copy, nonatomic) NSString *pauseResolutionActionTitle;
@property (copy, nonatomic) NSString *pauseResolutionActionConfirmationAlertTitle;
@property (copy, nonatomic) NSString *pauseResolutionActionConfirmationAlertSubtitle;
@property (copy, nonatomic) NSString *pauseResolutionActionConfirmationAlertButtonTitle;
@property (copy, nonatomic) id /* block */ pauseResolutionAction;
@property (nonatomic) long long pauseResolutionActionType;
@property (nonatomic) BOOL isReadyForUpdates;
@property (readonly, nonatomic) id<PXDisplayMomentShare> momentShare;
@property (readonly, nonatomic) id<PXCMMInvitation> invitation;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)setType:(long long)a0;
- (void)setState:(long long)a0;
- (id)initWithMomentShareStatus:(id)a0 presentationStyle:(long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_updateCPLStatus;
- (void)_updateCountsAndStatus;
- (id)initWithMomentShare:(id)a0 presentationStyle:(long long)a1;

@end
