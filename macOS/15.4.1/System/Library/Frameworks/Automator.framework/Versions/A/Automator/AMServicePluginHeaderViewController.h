@class NSArray, NSImage, NSDictionary, NSPopUpButton, AMServiceWorkflowMetaData;

@interface AMServicePluginHeaderViewController : AMInputOutputPluginHeaderViewController

@property (class, readonly, nonatomic) NSArray *_imageNames;
@property (class, readonly, nonatomic) NSArray *_imageMenuItems;

@property (readonly, nonatomic) AMServiceWorkflowMetaData *_serviceWorkflowMetaData;
@property (weak, nonatomic) NSPopUpButton *iconPopUpButton;
@property (weak, nonatomic) NSPopUpButton *colorPopUpButton;
@property (retain, nonatomic) NSImage *_cachedCustomImage;
@property (readonly, nonatomic) NSArray *_orderedColorKeys;
@property (readonly, nonatomic) NSDictionary *_colorKeysToSystemColors;

- (void).cxx_destruct;
- (void)loadView;
- (void)_addMenuEntryForColorKey:(id)a0 withMenuTitle:(id)a1 toPopUp:(id)a2;
- (void)_chooseCustomImage;
- (void)_chooseCustomImageCompleteWithImageData:(id)a0 pathExtension:(id)a1;
- (BOOL)_chooseCustomImageCompleteWithURL:(id)a0;
- (void)_selectFirstImage;
- (void)_setupColorPopUpButtonIfNeeded;
- (void)_updateCachedImage;
- (void)_updateColorPopUpButton;
- (void)_updateImageMenu;
- (void)colorPopUpButtonChanged:(id)a0;
- (void)imagePopUpButtonChanged:(id)a0;
- (id)receivesLabelTextForInputType:(id)a0;

@end
