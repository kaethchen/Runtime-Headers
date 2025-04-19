@class NSString, NSDictionary, NSUUID, NSButton, TUIKTConversationPaneController;
@protocol TUIKTConversationViewControllerDelegate;

@interface TUIKTConversationViewController : NSViewController {
    NSDictionary *_options;
    NSString *_peerContact;
    NSString *_peerAddress;
    NSUUID *_peerTransparencyUuid;
    NSString *_publicAccountIdentity;
    TUIKTConversationPaneController *_pane;
}

@property (retain, nonatomic) NSButton *verifyConversationLink;
@property (weak, nonatomic) id<TUIKTConversationViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)displayCodeSheet;
- (id)initForMembers:(id)a0 options:(id)a1;
- (id)initWithPeer:(id)a0 transparencyUuid:(id)a1 peerAddress:(id)a2 options:(id)a3;
- (void)sheetEnded;
- (void)updateLinkText;
- (void)verifyConversationClicked:(id)a0;

@end
