@class NSMapTable;

@interface SBLDebugShareKitManager : SBLShareKitManager {
    NSMapTable *_assetPerItemProvider;
}

- (void).cxx_destruct;
- (void)reset;
- (id)assetForItemProvider:(id)a0;
- (void)cleanupItems:(id)a0;
- (void)preflightItemProviders:(id)a0;
- (id)sharingItemsForObjects:(id)a0 sharingParams:(id)a1;

@end
