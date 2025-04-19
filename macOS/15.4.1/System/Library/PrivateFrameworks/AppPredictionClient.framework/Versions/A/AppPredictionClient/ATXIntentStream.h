@class LNMetadataProvider;

@interface ATXIntentStream : NSObject {
    LNMetadataProvider *_metadataProvider;
}

- (void).cxx_destruct;
- (void)_enumerateIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 forSource:(long long)a2 bundleIdFilter:(id)a3 allowMissingTitles:(BOOL)a4 reversed:(BOOL)a5 INIntentFilter:(id /* block */)a6 linkActionFilter:(id /* block */)a7 block:(id /* block */)a8;
- (id)_getIntentEventFromBMAppIntent:(id)a0 source:(long long)a1 bundleIdFilter:(id)a2 allowMissingTitles:(BOOL)a3 intentsToKeep:(id)a4;
- (id)_getIntentEventFromLinkActionRecord:(id)a0 source:(long long)a1 bundleIdFilter:(id)a2 allowMissingTitles:(BOOL)a3;
- (id)_unarchiveInteractionFromBMAppIntent:(id)a0;
- (id)_uuidForBMAppIntent:(id)a0 interaction:(id)a1;
- (id)getIntentEventForSourceItemID:(id)a0 forSource:(long long)a1;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 forSource:(long long)a2;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 forSource:(long long)a2 bundleIdFilter:(id)a3 allowMissingTitles:(BOOL)a4;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 forSource:(long long)a2 bundleIdFilter:(id)a3 allowMissingTitles:(BOOL)a4 INIntentFilter:(id /* block */)a5 linkActionFilter:(id /* block */)a6;
- (id)getIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1 forSource:(long long)a2 bundleIdFilter:(id)a3 allowMissingTitles:(BOOL)a4 limit:(unsigned long long)a5 INIntentFilter:(id /* block */)a6 linkActionFilter:(id /* block */)a7;
- (unsigned long long)numberOfIntentEventsBetweenStartDate:(id)a0 endDate:(id)a1;

@end
