@class NSArray, NSString;

@interface IMDServiceReachabilityBaseDelegate : NSObject <IMDServiceReachabilityDelegatePrivate, IMDServiceReachabilityDelegate>

@property (nonatomic, readonly) BOOL isInternationalSpamFilteringEnabled;
@property (nonatomic, weak) void /* unknown type, empty encoding */ serviceSession;
@property (nonatomic, readonly) BOOL networkDataAvailable;
@property (nonatomic, readonly) BOOL isUsableForSending;
@property (nonatomic, readonly) NSArray *idsRegisteredSIMIDs;
@property (nonatomic, readonly) BOOL hasMultipleSubscriptionsWithAtLeastOneActive;
@property (nonatomic, readonly) NSString *internalServiceName;
@property (nonatomic, readonly) NSArray *phoneNumbersOfActiveSubscriptions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasValidDowngradeRequestForHandleID:(id)a0;
- (id)initWithServiceSession:(id)a0;
- (BOOL)isMMSEnabledForContext:(id)a0;
- (BOOL)isSMSEnabledForContext:(id)a0;
- (long long)maxChatParticipantsForContext:(id)a0;
- (id)phoneNumberOnSubscriptionWithSIMID:(id)a0;
- (BOOL)shouldDowngradeToRecipient:(id)a0 fromSender:(id)a1 withContext:(id)a2;

@end
