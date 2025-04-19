@class NSString;

@interface MFLocalActionPersistence_macOS : EDLocalActionPersistence <EDLocalActionPersistenceSubClassMethods>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)moveSupportedFromMailboxURL:(id)a0 toURL:(id)a1;
- (void)handledFailedCopyForMessages:(id)a0;
- (long long)mailboxDatabaseIDForURL:(id)a0;
- (id)mailboxURLForDatabaseID:(long long)a0;
- (id)messageForDatabaseID:(long long)a0;

@end
