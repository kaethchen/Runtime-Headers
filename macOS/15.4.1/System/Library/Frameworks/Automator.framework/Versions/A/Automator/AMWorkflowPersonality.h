@class NSString, NSArray, AMWorkflowMetaData, AMTemplateChooserItem, AMPluginHeaderViewController, NSDictionary, NSImage;

@interface AMWorkflowPersonality : NSObject {
    NSDictionary *_settingsDictionary;
    AMTemplateChooserItem *_templateChooserItem;
}

@property (class, readonly, nonatomic) AMWorkflowPersonality *generalWorkflowPersonality;
@property (class, readonly, nonatomic) AMWorkflowPersonality *applicationWorkflowPersonality;
@property (class, readonly, nonatomic) NSArray *workflowPersonalities;

@property (readonly, nonatomic) NSDictionary *settingsDictionary;
@property (readonly, nonatomic) NSDictionary *personalitySettingsDictionary;
@property (readonly, nonatomic) BOOL isPluginType;
@property (readonly, nonatomic) BOOL hasHeaderView;
@property (readonly, copy, nonatomic) NSString *workflowTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *documentType;
@property (readonly, copy, nonatomic) NSString *libraryDirectoryPathComponent;
@property (readonly, copy, nonatomic) NSString *displayLabel;
@property (readonly, copy, nonatomic) NSString *extension;
@property (readonly, copy, nonatomic) NSString *headerInputType;
@property (readonly, copy, nonatomic) NSString *disableWarningDefaultsKey;
@property (readonly, copy, nonatomic) NSString *unlocalizedWorkflowType;
@property (readonly, nonatomic) NSImage *imageRepresentation;
@property (readonly, nonatomic) BOOL showInTitlebar;
@property (readonly, copy, nonatomic) NSString *installationAccessoryViewNibName;
@property (readonly, nonatomic) NSString *headerViewString;
@property (readonly, nonatomic) Class workflowMetaDataClass;
@property (readonly, nonatomic) BOOL allowsRenaming;
@property (readonly, nonatomic) BOOL allowsRevealInAutomatorOnInstallation;
@property (readonly, nonatomic) AMWorkflowMetaData *defaultWorkflowMetaData;
@property (readonly, nonatomic) AMPluginHeaderViewController *pluginHeaderViewController;
@property (readonly, nonatomic) NSArray *templateChooserItems;

+ (void)_instantiateWorkflowPersonalitiesIfNeeded;
+ (id)workflowPersonalitiesByIdentifier;
+ (id)workflowPersonalityForTypeIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_createDefaultPersonalitySettingsDictionary;
- (BOOL)canSaveWorkflow:(id)a0 atURL:(id)a1 forInstallation:(BOOL)a2 error:(id *)a3;
- (BOOL)finishSavingWorkflow:(id)a0 forOperation:(unsigned long long)a1 atURL:(id)a2 error:(id *)a3;
- (id)infoPlistForWorkflowMetaData:(id)a0 error:(id *)a1;
- (id)infoStringForCompleteInstallationWithMetaData:(id)a0;
- (id)infoStringForInitialInstallationWithMetaData:(id)a0;
- (BOOL)installationCompleteForWorkflowReturningShowCompleted:(id)a0 atURL:(id)a1;
- (id)parentDirectoryURLCreatingIfNecessary:(BOOL)a0 error:(id *)a1;
- (BOOL)shouldShowInTemplates;
- (id)templateDescription;
- (BOOL)updateFileWrapper:(id)a0 forWorkflowMetaData:(id)a1 documentType:(id)a2 error:(id *)a3;

@end
