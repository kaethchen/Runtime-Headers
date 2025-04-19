@class NSString, NSDictionary, NSSavePanel, IKSaveOptionsHandler;

@interface IKSaveOptions : NSObject {
    void *_privateData;
    id _saveOptionsView;
}

@property (retain) IKSaveOptionsHandler *handler;
@property (weak) NSSavePanel *savePanel;
@property (copy) NSString *imageUTTypePriv;
@property (retain) NSDictionary *imagePropertiesPriv;
@property (nonatomic) id delegate;
@property (readonly, nonatomic) NSDictionary *imageProperties;
@property (readonly, nonatomic) NSString *imageUTType;
@property (readonly, nonatomic) NSDictionary *userSelection;
@property (nonatomic) BOOL rememberLastSetting;

- (void).cxx_destruct;
- (BOOL)showsFlattenAnnotationsCheckbox;
- (void)addSaveOptionsAccessoryViewToSavePanel:(id)a0;
- (void)addSaveOptionsToView:(id)a0;
- (id)findButtonWithPrompt:(id)a0 inView:(id)a1;
- (BOOL)imagePropertiesAreEqualTo:(id)a0 forType:(id)a1;
- (id)initWithImageProperties:(id)a0 imageUTType:(id)a1;
- (BOOL)orientationCheckboxValue;
- (id)pdfOptions;
- (void)savePanelDidEndSheet:(id)a0;
- (void)setCanCalculateEstimatedSize:(BOOL)a0;
- (void)setEstimatedFileSize:(id)a0;
- (void)setOKButtonDisabled:(BOOL)a0;
- (void)setOrientationCheckboxValue:(BOOL)a0;
- (void)setPDFOptions:(id)a0;
- (void)setShowsFlattenAnnotationsCheckbox:(BOOL)a0;
- (void)setShowsOCRCheckbox:(BOOL)a0;
- (void)setShowsOptimizeImagesForScreenCheckbox:(BOOL)a0;
- (void)setShowsOrientationCheckbox:(BOOL)a0;
- (void)setShowsPermissionsButton:(BOOL)a0;
- (void)setShowsSaveImagesAsJPEGCheckbox:(BOOL)a0;
- (BOOL)showsOCRCheckbox;
- (BOOL)showsOptimizeImagesForScreenCheckbox;
- (BOOL)showsOrientationCheckbox;
- (BOOL)showsPermissionsButton;
- (BOOL)showsSaveImagesAsJPEGCheckbox;
- (void)syncMetaData:(id)a0;
- (void)updateFileExtensions;
- (void)updateImageProperties:(id)a0 imageUTType:(id)a1;

@end
