@class NSObject, AMPAvatarLockup;
@protocol AMPAvatarLockupModel;

@interface AMPAvatarLabeledLockup : AMPBindableView

@property (weak, nonatomic) AMPAvatarLockup *portrait;
@property (retain, nonatomic) NSObject<AMPAvatarLockupModel> *viewModel;
@property (nonatomic) BOOL showRolledOver;

- (id)init;
- (void).cxx_destruct;
- (void)drawFocusRingMask;
- (id)firstResponderCandidate;

@end
