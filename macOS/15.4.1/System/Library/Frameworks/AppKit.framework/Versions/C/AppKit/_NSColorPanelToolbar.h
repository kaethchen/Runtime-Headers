@class NSString, NSColorPanel;

@interface _NSColorPanelToolbar : NSToolbar <NSToolbarDelegate> {
    NSColorPanel *colorPanel;
    unsigned char _isMoving : 1;
    unsigned char _refusesToBeShown : 1;
    unsigned int _reserved : 30;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachToolbarToColorPanel:(id)a0;

- (void)dealloc;
- (void)colorPanelDidSelectColorPicker:(id)a0;
- (void)setDisplayMode:(unsigned long long)a0;
- (id)_colorPickerWithIdentifier:(id)a0;
- (id)_imageForColorPicker:(id)a0;
- (BOOL)_isMoving;
- (id)_itemIdentifiersForColorPickers:(id)a0;
- (id)_labelForColorPicker:(id)a0;
- (BOOL)_prefersToBeShown;
- (id)_tooltipForColorPicker:(id)a0;
- (id)configurationDictionary;
- (unsigned long long)displayMode;
- (id)initWithIdentifier:(id)a0 forColorPanel:(id)a1;
- (id)itemIdentifierForColorPicker:(id)a0;
- (BOOL)refusesToBeShown;
- (void)setRefusesToBeShown:(BOOL)a0;
- (void)setSizeMode:(unsigned long long)a0;
- (void)setVisible:(BOOL)a0;
- (void)syncWithRemoteToolbars;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)toolbarSelectableItemIdentifiers:(id)a0;

@end
