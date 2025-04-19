@class NSString, NSMutableDictionary;
@protocol GKFriendRequestComposeViewControllerDelegate;

@interface GKFriendRequestComposeViewController : NSViewController <GKDialogControllerSizing, GKViewController>

@property (retain) NSMutableDictionary *initialState;
@property (weak, nonatomic) id<GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)maxNumberOfRecipients;

- (void).cxx_destruct;
- (void)setMessage:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (void)addRecipientPlayers:(id)a0;
- (void)addRecipientsWithEmailAddresses:(id)a0;
- (void)addRecipientsWithPlayerIDs:(id)a0;

@end
