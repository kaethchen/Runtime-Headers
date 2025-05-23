@class NSString;

@interface LSRegistrantServerStrategy : NSObject <LSRegistrantStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginModificationOperation;
- (void)endModificationOperation;
- (void)enumerateSystemEXExtensionPoints:(id /* block */)a0;
- (void)flushModificationState;
- (id)notificationJournallerForBundleIdentifier:(id)a0 registeringPlaceholder:(BOOL)a1;
- (id)preUnregistrationContextForBundleIdentifier:(id)a0;
- (id)preUnregistrationContextForBundleUnit:(unsigned int)a0 context:(id)a1;
- (void)runSyncBlockInWriteContext:(id /* block */)a0;

@end
