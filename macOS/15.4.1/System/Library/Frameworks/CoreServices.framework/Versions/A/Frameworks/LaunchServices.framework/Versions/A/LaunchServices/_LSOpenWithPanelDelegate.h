@class NSOpenPanel, NSMutableDictionary;

@interface _LSOpenWithPanelDelegate : NSObject {
    struct unique_ptr<LaunchServices::State, std::default_delete<LaunchServices::State>> { struct __compressed_pair<LaunchServices::State *, std::default_delete<LaunchServices::State>> { struct State *__value_; } __ptr_; } state;
    BOOL allowAll;
    id lastSelectedAppURLIdentifier;
    NSMutableDictionary *recommendedAppURLIdentifiers;
    BOOL delegateCaresAboutAppSelectionChanges;
    BOOL delegateCaresAboutFilterMenuChanges;
}

@property (weak) NSOpenPanel *openPanel;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithState:(void *)a0 knownGoodApps:(id)a1;
- (BOOL)panel:(id)a0 shouldEnableURL:(id)a1;
- (void)panelSelectionDidChange:(id)a0;
- (void)toggleAll:(id)a0;

@end
