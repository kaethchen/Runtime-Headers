@class NSUbiquitousKeyValueStore, NSString, NSObject;
@protocol OS_os_log, EDConversationRemoteStorageDelegate, OS_dispatch_queue;

@interface EDConversationRemoteKVSStorage : NSObject <EDConversationRemoteStorage, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) id<EDConversationRemoteStorageDelegate> delegate;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *kvStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic, getter=isInitialized) BOOL initialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)synchronize;
- (id)dictionaryForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)refresh;
- (BOOL)initialized;
- (void)_storeChangedExternally:(id)a0;
- (void)removeDictionaryForKey:(id)a0;
- (id)storageName;
- (id)subsetOfMessageIDsToSyncFromMessageIDString:(id)a0;

@end
