@class NSMenu;

@interface SOAVPopUpButtonViewController : NSViewController

@property (retain, setter=setAVPopUpMenu:) NSMenu *avPopUpMenu;
@property (readonly) unsigned long long avOptions;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)performRelayPhoneCall:(id)a0;
- (void)_imHandleCapabilitiesDidChange:(id)a0;
- (id)buildLegacyMenuWithUpdateBlock:(id /* block */)a0;
- (void)_accountCapabilitiesDidChange:(id)a0;
- (void)_accountLoginStatusDidChange:(id)a0;
- (void)_avVideoCapabilitiesDidChange:(id)a0;
- (void)_commonSOAVPopUpButtonViewControllerInitWithAVOptions:(unsigned long long)a0 image:(id)a1 title:(id)a2;
- (void)askToShareRecipientScreen:(id)a0;
- (id)buildMenuWithUpdateBlock:(id /* block */)a0;
- (id)initWithAVOptions:(unsigned long long)a0 image:(id)a1 title:(id)a2;
- (void)inviteToShareMyScreen:(id)a0;
- (void)menuDidUpdate;
- (void)performFaceTimeAudioCall:(id)a0;
- (void)performFaceTimeVideoCall:(id)a0;
- (void)rebuildMenu;

@end
