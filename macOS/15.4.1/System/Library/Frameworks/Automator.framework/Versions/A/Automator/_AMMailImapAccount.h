@interface _AMMailImapAccount : _AMMailAccount

@property BOOL compactMailboxesWhenClosing;
@property int messageCaching;
@property BOOL storeDraftsOnServer;
@property BOOL storeJunkMailOnServer;
@property BOOL storeSentMessagesOnServer;
@property BOOL storeDeletedMessagesOnServer;

@end
