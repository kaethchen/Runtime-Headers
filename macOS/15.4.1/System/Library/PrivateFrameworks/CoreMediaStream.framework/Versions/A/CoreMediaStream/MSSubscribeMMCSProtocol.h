@class NSString, NSMutableDictionary;
@protocol MSSubscribeStorageProtocolDelegate;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol> {
    unsigned long long _itemCount;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
}

@property (nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deactivate;
- (void)retrieveAssets:(id)a0;
- (void)_getItemDone:(unsigned long long)a0 path:(id)a1 error:(id)a2;
- (void)_requestCompleted;
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)a0;
- (id)initWithPersonID:(id)a0;

@end
