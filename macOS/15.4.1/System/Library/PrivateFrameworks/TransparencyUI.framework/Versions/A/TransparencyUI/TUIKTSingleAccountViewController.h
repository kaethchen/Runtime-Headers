@class NSTextField, TUIStaticIdentityManager, NSBox, NSDictionary, NSButton;

@interface TUIKTSingleAccountViewController : NSViewController <TUIStaticIdentityManagerProtocol> {
    NSDictionary *_options;
}

@property (retain, nonatomic) TUIStaticIdentityManager *staticIdentityManager;
@property (retain, nonatomic) NSBox *box;
@property (retain, nonatomic) NSTextField *accountKeyCaption;
@property (retain, nonatomic) NSTextField *accountKeyText;
@property (retain, nonatomic) NSTextField *accountKeyValue;
@property (retain, nonatomic) NSButton *accountKeyCopyButton;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)loadView;
- (void)updateUI;
- (void)_showInfoAlert:(id)a0;
- (void)_accountKeyValueClicked:(id)a0;
- (void)_beginObservingTransparencyStatusChangedNotification;
- (void)_processAccountKeyFieldTextSelection:(id)a0;
- (void)_stopObservingTransparencyStatusChangedNotification;
- (void)_transparencyStatusChangedNotificationHandler:(id)a0;
- (void)copyAccountKeyLinkClicked:(id)a0;
- (void)refreshKey;

@end
