@class NSString, VRXVisualResponseProvider, SiriUIPluginManager;

@interface SiriUISnippetManager : NSObject <SRUIFSpeakableObjectProviding> {
    SiriUIPluginManager *_pluginManager;
    VRXVisualResponseProvider *_visualResponseProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)debugBundlePath;
+ (void)_debugSetPluginDirectory:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_compareObject:(id)a0 toObject:(id)a1 usingBlock:(id /* block */)a2;
- (id)_createDebugViewControllerForAceObject:(id)a0;
- (BOOL)_listItem:(id)a0 isEqualToListItem:(id)a1;
- (BOOL)_listItem:(id)a0 isPreferredOverListItem:(id)a1;
- (void)_logRFSnippetRenderingContextWithEvent:(long long)a0 aceViewId:(id)a1;
- (id)disambiguationItemForListItem:(id)a0 disambiguationKey:(id)a1;
- (id)filteredDisambiguationListItems:(id)a0;
- (id)listItemToPickInAutodisambiguationForListItems:(id)a0;
- (id)speakableProviderForObject:(id)a0;
- (id)transcriptItemForObject:(id)a0;

@end
