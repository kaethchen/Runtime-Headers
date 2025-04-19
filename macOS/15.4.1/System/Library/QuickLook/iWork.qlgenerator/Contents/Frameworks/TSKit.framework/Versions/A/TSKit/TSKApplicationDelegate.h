@class TSKApplicationICloudPreferences, TSKApplicationPropertiesProvider, NSDate;

@interface TSKApplicationDelegate : NSObject

@property (class, readonly, nonatomic) TSKApplicationDelegate *sharedDelegate;
@property (class, readonly, nonatomic) TSKApplicationPropertiesProvider *sharedPropertiesProvider;
@property (class, readonly, nonatomic) TSKApplicationICloudPreferences *sharedICloudPreferences;

@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) BOOL textInspectorShowsMoreSubpane;
@property (readonly, nonatomic) Class propertiesProviderClass;
@property (readonly, nonatomic) Class iCloudPreferencesProviderClass;
@property (readonly, getter=isActivating) BOOL activating;
@property (readonly, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic) BOOL performanceModeEnabled;
@property (readonly, nonatomic) BOOL supportsPastingIntoGroups;
@property (readonly, nonatomic) BOOL supportsFreehandAnimationUI;
@property (readonly, nonatomic) BOOL supportsCommentsInMasters;
@property (readonly, nonatomic) BOOL supportsLinkedTextBoxes;
@property (readonly, nonatomic) BOOL imageGalleryCaptionsUsePlaceholderText;
@property (readonly, nonatomic) BOOL supportsImageGalleryHyperlinks;
@property (readonly, nonatomic) BOOL supportsMovieHyperlinks;
@property (readonly, nonatomic) BOOL supportsHDRInteractiveCanvases;
@property (readonly, nonatomic) NSDate *applicationLaunchTime;

+ (void)initialize;
+ (id)documentDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)openURL:(id)a0;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)openURL:(id)a0 displayAlertOnError:(BOOL)a1;
- (BOOL)shouldRenderLargeImages;
- (void)configureSharedPropertiesProvider:(id)a0;
- (id)defaultEmailHyperlinkURL;
- (id)defaultPhoneHyperlinkURL;
- (id)defaultWebHyperlinkURL;
- (void)donateAddBodyRowAtBottomIntentWithInfo:(id)a0;
- (void)donateAddFormRecordIntentWithFormSheet:(id)a0;
- (void)p_setUpSharedICloudPreferences;
- (void)p_setUpSharedPropertiesProviderIfNeeded;
- (BOOL)shouldValidateLayoutEngineWhileInsertingRows;

@end
