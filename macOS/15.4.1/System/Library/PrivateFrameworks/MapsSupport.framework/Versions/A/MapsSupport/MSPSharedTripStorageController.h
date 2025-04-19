@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject {
    BOOL _initalisedStoredSessions;
}

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSessionStorage;

+ (id)_receivedNotificationRulesPath;
+ (id)_receivedSessionsPath;
+ (id)_senderSessionStoragePath;
+ (id)_sentNotificationRulesPath;
+ (void)removeFilesFromBackupsIfNeeded;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (id)_identifiersOfStaleSessions:(id)a0;
- (void)_loadSenderSession;
- (void)_loadStoredSessions;
- (void)_saveReceivingRules;
- (void)_saveSenderSession;
- (void)_saveSendingRules;
- (void)_saveStoredSessions;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (id)groupSessionInfoForKey:(id)a0;
- (void)initialiseStoredSessionsIfNeeded;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)receivingRulesTouched;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)sendingRulesTouched;
- (void)updateGroupSessionStorageWithState:(id)a0;

@end
