@class TransparencyStaticKey, NSArray, NSString, NSDictionary, KTIDSSession, NSTimer, NSPersonNameComponents;
@protocol TUIStaticIdentityManagerProtocol;

@interface TUIStaticIdentityManager : NSObject <KTNotificationCenter> {
    NSPersonNameComponents *_personNameComponents;
}

@property (copy, nonatomic) NSArray *conversationMembers;
@property (copy, nonatomic) NSString *lastUsedAddress;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) TransparencyStaticKey *staticKey;
@property (retain, nonatomic) KTIDSSession *ktSession;
@property (retain, nonatomic) NSString *peerPublicAccountIdentity;
@property (retain, nonatomic) NSString *sasCode;
@property (retain, nonatomic) NSTimer *sessionExpiredTimer;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (weak, nonatomic) id<TUIStaticIdentityManagerProtocol> delegate;
@property (readonly, nonatomic) NSString *selfAccountKeyDisplayString;
@property (readonly, nonatomic) NSString *peerAccountKeyDisplayString;
@property (readonly, nonatomic) NSString *sasCodeString;
@property (readonly, nonatomic) long long sessionState;
@property (readonly, nonatomic) BOOL accountKeysDisplayed;
@property (readonly, nonatomic) BOOL conversationVerified;
@property (readonly, nonatomic) BOOL sasCodeRefreshRequired;
@property (readonly, nonatomic) unsigned long long sasCodeValidMinutes;
@property (readonly, nonatomic) BOOL sasCodeValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2 deliverImmediately:(BOOL)a3;
- (void)handleNotification:(id)a0;
- (void)_updateUI;
- (void)dismissDialog;
- (void)_setupKTSession;
- (void)sessionExpired:(id)a0;
- (void)deleteKTSession;
- (void)showAccountKeys;
- (long long)_sessionStateWithStateString:(id)a0;
- (id)displayStringWithAccountPublicID:(id)a0;
- (void)hideAccountKeys:(BOOL)a0;
- (id)initWithConversationMembers:(id)a0 options:(id)a1;
- (id)localizedPeerAccountNameMessage:(id)a0;
- (id)peerCNContact:(id)a0;
- (void)requestConversationVerificationState:(BOOL)a0;
- (void)requestConversationVerificationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)requestNewSasCode;
- (void)requestNewSasCodeWithDelay;
- (void)requestSelfAccountKey;
- (void)showAccountKeys:(BOOL)a0;
- (void)verifyConversation;
- (void)verifyConversationWithContact:(id)a0 completionHandler:(id /* block */)a1;

@end
