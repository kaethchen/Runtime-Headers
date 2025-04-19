@class NSMenu, ResponsiveDesignPresetConfiguration;
@protocol ResponsiveDesignViewportPresetMenuDelegate;

@interface ResponsiveDesignViewportPresetMenuController : NSObject {
    ResponsiveDesignPresetConfiguration *_freeFormPreset;
    BOOL _savingFreeFormPresetConfigurationSoon;
}

@property (readonly, nonatomic) NSMenu *menu;
@property (readonly, nonatomic) ResponsiveDesignPresetConfiguration *freeFormPreset;
@property (weak, nonatomic) id<ResponsiveDesignViewportPresetMenuDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateMenuItems;
- (void)viewportPresetMenuItemSelected:(id)a0;
- (id)_createMenuItemForPreset:(id)a0;
- (id)_getViewportPresets;
- (void)_saveFreeFormPresetConfiguration;
- (id)initWithExistingMenu:(id)a0;

@end
