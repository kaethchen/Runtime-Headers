@class NSTextField, NSString, NSView, TUCallCenter, NSLayoutConstraint, NSObject;
@protocol OS_dispatch_source;

@interface DFRCallParticipantViewController : NSViewController

@property (weak) NSView *avatarContainer;
@property (weak) NSTextField *callerNameLabel;
@property (weak) NSTextField *callDataLabel;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *callDurationTimer;
@property (retain, nonatomic) TUCallCenter *callCenter;
@property (readonly, nonatomic) NSString *connectingString;
@property (weak) NSLayoutConstraint *callerNameLabelLeadingToViewConstraint;
@property (weak) NSLayoutConstraint *callerNameLabelLeadingToAvatarViewConstraint;
@property (nonatomic, getter=isAvatarContainerHidden) BOOL avatarContainerHidden;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)contactForIdentifier:(id)a0;
- (void)updateWithCall:(id)a0;
- (void)callConnected:(id)a0;
- (id)callDataStringForCall:(id)a0;
- (void)callStatusChanged:(id)a0;
- (id)currentCall;
- (void)endCallDurationTimer;
- (void)startCallDurationTimer;
- (void)updateAvatarAndName;
- (void)updateCallDataString;

@end
