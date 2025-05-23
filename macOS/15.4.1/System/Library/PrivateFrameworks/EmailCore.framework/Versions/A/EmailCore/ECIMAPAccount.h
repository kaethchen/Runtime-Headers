@class NSDate;

@interface ECIMAPAccount : ECAccount

@property (nonatomic) BOOL compactWhenClosingMailboxes;
@property (nonatomic) long long daysBetweenSyncs;
@property (copy, nonatomic) NSDate *dateOfLastSync;
@property (nonatomic) BOOL queriedUserToSetPathPrefix;
@property (nonatomic) BOOL shouldUseGmailLabelStores;
@property (readonly, nonatomic) BOOL shouldUseGmailLabelStoresIsSet;
@property (nonatomic) BOOL needsGmailLablesCleanup;
@property (nonatomic) BOOL hasServerDefinedAllMailMailbox;
@property (nonatomic) BOOL hasServerDefinedArchiveMailbox;
@property (nonatomic) BOOL hasServerDefinedDraftsMailbox;
@property (nonatomic) BOOL hasServerDefinedJunkMailbox;
@property (nonatomic) BOOL hasServerDefinedSentMailbox;
@property (nonatomic) BOOL hasServerDefinedTrashMailbox;
@property (nonatomic) BOOL ignoreServerDefinedArchiveMailbox;
@property (nonatomic) BOOL ignoreServerDefinedDraftsMailbox;
@property (nonatomic) BOOL ignoreServerDefinedJunkMailbox;
@property (nonatomic) BOOL ignoreServerDefinedSentMailbox;
@property (nonatomic) BOOL ignoreServerDefinedTrashMailbox;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (void).cxx_destruct;
- (void)clearQueriedUserToSetPathPrefix;
- (id)_hostnameFromParentAccount:(id)a0;
- (void)clearDaysBetweenSyncs;
- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;
- (id)portNumberObject;
- (id)usesSSLObject;

@end
