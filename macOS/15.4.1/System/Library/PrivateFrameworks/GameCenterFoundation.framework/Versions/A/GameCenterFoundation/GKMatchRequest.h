@class NSString, NSArray, NSDictionary, GKMatchRequestInternal, NSObject;
@protocol OS_dispatch_queue;

@interface GKMatchRequest : NSObject <GKReportable>

@property (readonly, copy, nonatomic) NSString *internalDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) GKMatchRequestInternal *internal;
@property (readonly, nonatomic) BOOL hasFutureRecipientProperties;
@property unsigned long long minPlayers;
@property unsigned long long maxPlayers;
@property unsigned long long playerGroup;
@property unsigned int playerAttributes;
@property (retain) NSArray *recipients;
@property (copy) NSString *inviteMessage;
@property unsigned long long defaultNumberOfPlayers;
@property BOOL restrictToAutomatch;
@property (copy) id /* block */ recipientResponseHandler;
@property (copy) id /* block */ inviteeResponseHandler;
@property (retain) NSArray *playersToInvite;
@property (copy) NSString *queueName;
@property (copy) NSDictionary *properties;
@property (copy) NSDictionary *recipientProperties;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)a0;
+ (id)reportableKeyPaths;
+ (id)sanitizeProperties:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)recipients;
- (void)setRecipients:(id)a0;
- (void)setProperties:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (id)inviteMessage;
- (void)setInviteMessage:(id)a0;
- (id)playersToInvite;
- (BOOL)defaultNumberOfPlayersIsValid;
- (void)ensureValidityHosted:(BOOL)a0;
- (void)expectFutureRecipientPropertiesForPlayers:(id)a0;
- (id)guestPlayers;
- (BOOL)isConfiguredForAutomatchOnly;
- (BOOL)isIncorrectlyInvitingPlayers;
- (BOOL)isRecipientCountValid;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)a0;
- (void)removeLocalPlayerFromPlayersToInvite;
- (void)setPlayersToInvite:(id)a0;
- (void)updateRecipientProperties:(id)a0 forPlayer:(id)a1;
- (void)updateRecipientProperties:(id)a0 forPlayer:(id)a1 withSanitization:(BOOL)a2;
- (id)validateForHosted:(BOOL)a0;
- (id)validateForHosted:(BOOL)a0 turnBased:(BOOL)a1;
- (id)validateForTurnBased;
- (id)validateNumbersOfPlayersWithMax:(unsigned long long)a0;

@end
