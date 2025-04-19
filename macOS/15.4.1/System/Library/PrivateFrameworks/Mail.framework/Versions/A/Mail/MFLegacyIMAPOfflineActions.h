@interface MFLegacyIMAPOfflineActions : NSObject

+ (void)_setLabelsOnAction:(long long)a0 labels:(id)a1 add:(BOOL)a2 connection:(id)a3;
+ (void)_addActionMessagesForActionID:(long long)a0 uids:(id)a1 uidsAreReal:(BOOL)a2 mailboxID:(long long)a3 connection:(id)a4;
+ (void)_convertAppendMessageOperation:(id)a0 mailboxID:(long long)a1 connection:(id)a2;
+ (void)_convertCopyMessagesOperation:(id)a0 mailboxID:(long long)a1 account:(id)a2 connection:(id)a3;
+ (id)_convertLabelNameArrayToLabelSet:(id)a0 account:(id)a1;
+ (void)_convertStoreFlagsOperation:(id)a0 mailboxID:(long long)a1 connection:(id)a2;
+ (void)_convertStoreLabelsOperation:(id)a0 mailboxID:(long long)a1 account:(id)a2 connection:(id)a3;
+ (void)_deleteOfflineCacheDirectoryForIMAPAccount:(id)a0;
+ (long long)_messageForTemporaryUID:(unsigned int)a0 mailboxID:(long long)a1 connection:(id)a2;
+ (long long)_messageIDForUID:(unsigned int)a0 mailboxID:(long long)a1 connection:(id)a2;
+ (BOOL)accountHasLegacyOfflineOperations:(id)a0;
+ (void)upgradeOperationsForIMAPAccount:(id)a0 fetchSeparatorIfNecessary:(BOOL)a1;

@end
