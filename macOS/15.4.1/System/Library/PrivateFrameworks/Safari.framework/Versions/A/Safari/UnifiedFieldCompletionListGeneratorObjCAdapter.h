@class NSString, WBSBrowserTabCompletionProvider;

@interface UnifiedFieldCompletionListGeneratorObjCAdapter : NSObject <WBSBrowserTabCompletionProviderSource, WBSBrowserTabCompletionProviderDelegate>

@property (readonly, nonatomic) void *completionListGenerator;
@property (readonly, nonatomic) WBSBrowserTabCompletionProvider *tabCompletionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)browserTabCompletionProvider:(id)a0 alternativeDisplayTextForURLForExtensionURL:(id)a1;
- (BOOL)browserTabCompletionProvider:(id)a0 doesURLRepresentNativeContent:(id)a1;
- (BOOL)browserTabCompletionProvider:(id)a0 shouldExtensionURLAppearAsSwitchToTabItem:(id)a1;
- (void)didFindMatchesForCurrentQueryInBrowserTabCompletionProvider:(id)a0;
- (id)selectedTabInfoForBrowserTabCompletionProvider:(id)a0;
- (id)tabInfosForBrowserTabCompletionProvider:(id)a0;
- (void)_tabsDidChange:(id)a0;
- (void)_startTrackingTabChanges;
- (void)_stopTrackingTabChanges;
- (void)cancelLocalTabSearch;
- (id)initWithCompletionListGenerator:(void *)a0;
- (void)startLocalTabSearch;

@end
