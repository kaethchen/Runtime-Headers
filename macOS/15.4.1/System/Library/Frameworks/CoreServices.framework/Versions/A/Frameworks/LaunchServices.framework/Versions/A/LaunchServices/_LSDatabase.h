@class FSNode;

@interface _LSDatabase : NSObject {
    struct __CSStore { } *store;
    struct LSSchema { unsigned int headerTable; unsigned int bundleTable; unsigned int claimTable; unsigned int serviceTable; unsigned int utypeTable; struct { struct CSMap { unsigned int table; struct CSMapCallbacks { void /* function */ *retainKey; void /* function */ *releaseKey; void /* function */ *getKeyHash; void /* function */ *keyMatchesData; void /* function */ *retainValue; void /* function */ *releaseValue; } cb; struct CSMapContext *context; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; unsigned int _generation; struct _CSMapHeader *_header; unsigned int *_keys; unsigned int *_values; } map; } bindableKeyMap; struct { struct CSMap { unsigned int table; struct CSMapCallbacks { void /* function */ *retainKey; void /* function */ *releaseKey; void /* function */ *getKeyHash; void /* function */ *keyMatchesData; void /* function */ *retainValue; void /* function */ *releaseValue; } cb; struct CSMapContext *context; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; unsigned int _generation; struct _CSMapHeader *_header; unsigned int *_keys; unsigned int *_values; } map; unsigned int bindingClass; unsigned char isCaseInsensitive; } bindingMaps[15]; unsigned int handlerPrefTable; unsigned int containerTable; unsigned int aliasTable; unsigned int pluginTable; unsigned int extensionPointTable; unsigned int bindingListTable; unsigned int propertyListTable; unsigned int localizedStringTable; unsigned int canonicalStringTable; struct _LSSchemaCache *_cache; } schema;
    FSNode *node;
    struct LSSessionKey { unsigned int uid; BOOL systemSession; } sessionKey;
    struct __CSStoreAccessContext { } *accessContext;
    unsigned char needsUpdate : 1;
    unsigned char isForcedForXCTesting : 1;
    unsigned char isForcedForRemoteUpdates : 1;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_init;

@end
