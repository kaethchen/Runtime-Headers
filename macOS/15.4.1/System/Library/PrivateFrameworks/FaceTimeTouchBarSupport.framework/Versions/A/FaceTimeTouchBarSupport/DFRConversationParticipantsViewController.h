@class NSTextField, NSView, TUCall, NSString, TUCallCenter, NSMutableDictionary, NSObject, NSLayoutConstraint, CNContactStore;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DFRConversationParticipantsViewController : DFRCallParticipantViewController <CNContactFactoryProtocol> {
    BOOL _avatarContainerHidden;
}

@property (weak) NSView *avatarViewContainer;
@property (weak) NSTextField *callerNameLabel;
@property (weak) NSTextField *callDataLabel;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *callDurationTimer;
@property (readonly, nonatomic) TUCall *currentCall;
@property (readonly, nonatomic) TUCallCenter *callCenter;
@property (weak) NSLayoutConstraint *callerNameLabelLeadingToViewConstraint;
@property (weak) NSLayoutConstraint *callerNameLabelLeadingToAvatarViewConstraint;
@property (readonly, nonatomic) NSMutableDictionary *avatarViewControllerContactCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (copy, nonatomic) id /* block */ contactBuilder;
@property (copy, nonatomic) id /* block */ contactsByHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)updateWithCall:(id)a0;
- (void)updateWithConversation:(id)a0;
- (void)callConnected:(id)a0;
- (void)callStatusChanged:(id)a0;
- (id)connectingString;
- (void)endCallDurationTimer;
- (BOOL)isAvatarContainerHidden;
- (void)setAvatarContainerHidden:(BOOL)a0;
- (void)startCallDurationTimer;
- (void)updateAvatarAndName;
- (void)updateAvatarViewControllerCacheForConversation:(id)a0;
- (void)updateAvatarViewControllerForContacts:(id)a0;
- (void)updateCallDataString;
- (void)updateWithRecentItem:(id)a0;

@end
