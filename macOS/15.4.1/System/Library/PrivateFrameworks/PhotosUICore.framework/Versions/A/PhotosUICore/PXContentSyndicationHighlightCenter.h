@class NSString, SLHighlightCenter, NSHashTable;

@interface PXContentSyndicationHighlightCenter : NSObject <SLHighlightCenterDelegate> {
    NSHashTable *_observers;
    SLHighlightCenter *_socialLayerHighlightCenter;
}

@property BOOL isAutomaticSharingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_updateValue;
- (void)registerObserver:(id)a0;
- (id)_allObservers;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void)highlightCenterSettingsEnablementHasChanged:(id)a0;

@end
