@class NSView, NSString, NSArray, NSFontManager, NSToolbar;

@interface NSFontPanel : NSPanel <NSWindowRestoration> {
    id _familyToFaceConstraint;
    NSFontManager *_manager;
    NSArray *_collectionNames;
    id _selection;
    void *_carbonNotification;
    id _targetObject;
    id _familyList;
    id _faceList;
    id _sizeList;
    id _mainCollectionList;
    id _sizeField;
    id _sizeSlider;
    id _sizeSliderBox;
    id _preview;
    id _previewContainer;
    id _mainSplitView;
    id _mmCollectionList;
    id _mmFamilyList;
    id _mmFaceList;
    id _mmSizeList;
    id _fullSizeHeightConstraint;
    id _searchField;
    id _fixedListButton;
    id _sliderButton;
    id _accessoryView;
    struct __fpFlags { unsigned char setFontChange : 1; unsigned char setFontAttributeChange : 1; unsigned char _delRespFamily : 1; unsigned char _delRespFace : 1; unsigned char _delRespSize : 1; unsigned char _delRespColl : 1; unsigned char _collectionDisabled : 1; unsigned char _sizeDisabled : 1; unsigned char _faceDisabled : 1; unsigned char showEffects : 1; unsigned char _uiMode : 8; unsigned char _miniMode : 1; unsigned short _reserved : 13; } _fpFlags;
    id _regularModeBox;
    id _miniModeBox;
    id _sizeBox;
    id _collectionLabel;
    id _sizeLabel;
    id _faceDivider;
    id _familyLabel;
    id _sizeStyleButton;
    id _newSizeField;
    id _editSizeList;
    id _editSizeListBox;
    id _editSizeSliderBox;
    id _editSizeSliderMaxField;
    id _editSizeSliderMinField;
    id _sizeEditWindow;
    id _availableSizes;
    id _addCollectionButton;
    id _removeCollectionButton;
    double _fontPanelPreviewHeight;
    id _typographyPanel;
    id _actionButton;
    id _fontEffectsBox;
    int _sizeStyle;
    NSToolbar *_fontPanelToolbar;
    id _fontPanelContentView;
    long long _currentModeMask;
}

@property (class, readonly) NSFontPanel *sharedFontPanel;
@property (class, readonly) BOOL sharedFontPanelExists;

@property (retain) NSView *accessoryView;
@property BOOL worksWhenModal;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createFontPanelSizeRep;
+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;

- (oneway void)release;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setSize:(id)a0;
- (BOOL)_canShowEffects;
- (void)_checkMiniMode:(double)a0;
- (id)_fontAttributes;
- (void)_validateSizes:(long long)a0;
- (void)becomeKeyWindow;
- (void)_addSizeToList:(id)a0;
- (BOOL)_inHideFaceMode;
- (void)_resetSizeList:(id)a0;
- (void)_searchChanged:(id)a0;
- (void)_validateFaces:(long long)a0;
- (void)resignKeyWindow;
- (void *)_carbonNotification;
- (void)_changeSizeStyle:(id)a0;
- (void)_changeSizeStyle:(id)a0 animated:(BOOL)a1;
- (void)_checkCollectionMoveOut:(long long)a0;
- (void)_chooseBestMatchingFace;
- (void)_chooseCollection:(id)a0;
- (void)_chooseFace:(id)a0;
- (void)_chooseFamily:(id)a0;
- (void)_chooseSize:(id)a0;
- (void)_chooseSizeFromField:(id)a0;
- (void)_chooseSizeFromList:(id)a0;
- (void)_chooseSizeFromSlider:(id)a0;
- (void)_collectionsChanged:(id)a0;
- (id)_createFontPanelSizeRep;
- (id)_currentCollectionName;
- (id)_currentFamilyName;
- (id)_currentFont;
- (id)_fontPanelDescriptorsDictionaryFromFromPasteboard:(id)a0;
- (void)_fontPanelDidLoad;
- (void)_fontPanelRemoveCollectionSheet:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (BOOL)_fontPreviewIsVisible;
- (BOOL)_inHideCollectionsMode;
- (BOOL)_inMiniMode;
- (void)_installAccessoryView:(id)a0;
- (void)_openExtrasPopup:(id)a0;
- (void)_populateMiniMode;
- (void)_populatePopup:(id)a0 withTableView:(id)a1;
- (void)_reflectFont;
- (void)_reflectSize;
- (void)_removeSizeFromList:(id)a0;
- (id)_selectedSize;
- (void)_sendCarbonNotification;
- (void)_setAttributes:(id)a0 isMultiple:(BOOL)a1;
- (void)_setFont:(id)a0;
- (void)_setPreviewFont:(id)a0;
- (void)_setRecents:(id)a0;
- (void)_setup;
- (BOOL)_showEffects;
- (void)_sizeEditDone:(id)a0;
- (void)_sizeListChanged:(id)a0;
- (void)_sortCollections;
- (void)_toggleCollections:(long long)a0 animate:(BOOL)a1;
- (void)_togglePreview:(BOOL)a0 animated:(BOOL)a1;
- (void)_toggleTypographyPanel;
- (id)_typographyPanel;
- (void)_updateFontPanelModes;
- (void)_updateFontPreview;
- (void)_updateFontPreviewFont;
- (void)_updateToolbarOverflowItems;
- (void)_validateExtrasButton:(id)a0;
- (void)_validateFontPanelFontAttributes;
- (void)_windowDidResize:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)collectionButtonPressed:(id)a0;
- (unsigned long long)comboBox:(id)a0 indexOfItemWithStringValue:(id)a1;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (id)convertAttributes:(id)a0;
- (unsigned long long)draggingSourceOperationMaskForTableView:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)loadFaces:(id)a0;
- (void)makeKeyWindow;
- (long long)numberOfItemsInComboBox:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)orderFrontRegardless;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (id)panelConvertFont:(id)a0;
- (void)reloadDefaultFontFamilies;
- (BOOL)removeItemForTableView:(id)a0 pasteboard:(id)a1 operation:(unsigned long long)a2;
- (void)setCarbonNotification:(void *)a0;
- (void)setChooser:(id)a0;
- (void)setPanelFont:(id)a0 isMultiple:(BOOL)a1;
- (void)setSizeTitle:(id)a0;
- (BOOL)splitView:(id)a0 canCollapseSubview:(id)a1;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (void)windowDidUpdate:(id)a0;
- (struct CGSize { double x0; double x1; })windowWillResize:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;

@end
