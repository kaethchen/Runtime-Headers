@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICInAppMessageStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_messageEntryCache;
    NSMutableDictionary *_globalPropertyCache;
    NSMutableDictionary *_applicationPropertyCache;
    NSMutableDictionary *_messageMetadataCache;
    NSMutableArray *_pendingEvents;
    NSString *_filePath;
}

- (id)init;
- (void).cxx_destruct;
- (void)_load;
- (id)initWithFilePath:(id)a0;
- (void)_commit;
- (void)removeMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)_defaultStoreFilePath;
- (void)addMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)addPendingMessageEvent:(id)a0 completion:(id /* block */)a1;
- (void)allApplicationStorePropertiesWithCompletion:(id /* block */)a0;
- (void)allStorePropertiesWithCompletion:(id /* block */)a0;
- (void)getAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getAllMessageEntriesForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)getAllMessageEntriesWithCompletion:(id /* block */)a0;
- (void)getAllMetadataForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getAllMetadataForBundleIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)getMessageEntryWithIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getMetadataForMessageIdentifier:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getStorePropertyForKey:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getStorePropertyForKey:(id)a0 completion:(id /* block */)a1;
- (void)pendingMessageEventsWithCompletion:(id /* block */)a0;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeAllMetadataForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)removeMessageEntryWithIdentifier:(id)a0 forBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)removePendingMessageEventWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetStoreWithCompletion:(id /* block */)a0;
- (void)updateMessageEntry:(id)a0 completion:(id /* block */)a1;
- (void)updateMetadata:(id)a0 messageIdentifier:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)updateStoreProperty:(id)a0 forKey:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)updateStoreProperty:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
