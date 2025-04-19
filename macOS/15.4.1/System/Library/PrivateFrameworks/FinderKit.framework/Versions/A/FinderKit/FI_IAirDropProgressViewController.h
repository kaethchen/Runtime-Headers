@class FI_TUpdateLayerView, NSString, FI_TAirDropStatusViewController, FI_TAirDropProgressController, NSImage, NSObject, FI_TAirDropAskUserViewController;
@protocol TAirDropTransfer;

@interface FI_IAirDropProgressViewController : FI_TViewController <TAirDropTransferEventDelegate, TMarkTornDown> {
    struct TNSWeakPtr<FI_TAirDropProgressController> { FI_TAirDropProgressController *fWeakObject; } _weakProgressController;
    FI_TUpdateLayerView *_contentView;
    FI_TAirDropAskUserViewController *_askUserViewController;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _targetNode;
}

@property (retain, nonatomic) FI_IAirDropProgressViewController *selfReference;
@property (readonly, retain, nonatomic) FI_TAirDropAskUserViewController *userInputViewController;
@property (readonly, retain, nonatomic) FI_TAirDropStatusViewController *statusViewController;
@property (copy, nonatomic) NSImage *mediumImage;
@property (copy, nonatomic) NSImage *smallImage;
@property (readonly, nonatomic) struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } operationControllerLock;
@property (readonly, nonatomic) long long bytesToCopy;
@property (readonly, nonatomic) long long bytesCopied;
@property (weak, nonatomic) FI_TAirDropProgressController *progressController;
@property (readonly, nonatomic) long long currentSFOperationEvent;
@property (readonly, nonatomic) double percentComplete;
@property BOOL shouldEnableButtons;
@property (readonly) BOOL hasBlockedBeenShown;
@property (nonatomic) BOOL canceledByUser;
@property (retain, nonatomic) NSObject<TAirDropTransfer> *transfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)cancel;
- (id)nibName;
- (void)setContentView:(id)a0;
- (void)cancelButtonPressed:(id)a0;
- (void)showPopover;
- (void)aboutToTearDown;
- (void)inlineProgressCancel;
- (void)initCommon;
- (void)setPercentComplete:(double)a0;
- (void)setTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)targetNode;
- (void)okButtonPressed:(id)a0;
- (void)setBytesCopied:(long long)a0;
- (void)setBytesToCopy:(long long)a0;
- (void)browserViewWillBeRemovedFromWindow;
- (id)currentAskUserViewController;
- (BOOL)isShowingAskUserPhotoView;
- (BOOL)isShowingAskUserVariant;
- (BOOL)isShowingStatusView;
- (void)openButtonPressed:(id)a0;
- (struct shared_ptr<IAirDropBaseOperationController> { struct IAirDropBaseOperationController *x0; struct __shared_weak_count *x1; })operationController;
- (void)preflightSFOperationEvent:(long long)a0 results:(id)a1 opController:(void *)a2;
- (void)setHasBlockedBeenShown:(BOOL)a0;
- (void)sfOperationEventBlocked:(id)a0 opController:(void *)a1;
- (BOOL)shouldShowFlyOverAnimation;
- (void)showAskUserICloudSharingViewWithSenderName:(const void *)a0 URL:(id)a1 receivingFile:(BOOL)a2;
- (void)showAskUserPhotoWithMainTextStr:(const void *)a0 receivingFile:(BOOL)a1;
- (void)showAskUserViewWithMainTextStr:(const void *)a0 viewType:(int)a1 receivingFile:(BOOL)a2;
- (void)showContentView:(id)a0;
- (void)showErrorViewWithErrorTextStr:(const void *)a0;
- (void)showOrUpdateWaitingView:(id)a0;
- (void)showStatusViewWithMainTextStr:(const void *)a0 mainTextTruncateInRange:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 subTextStr:(const void *)a2 subTextTruncateInRange:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 percentComplete:(double)a4;
- (void)showWaitingViewWithWaitingTextStr:(const void *)a0;

@end
