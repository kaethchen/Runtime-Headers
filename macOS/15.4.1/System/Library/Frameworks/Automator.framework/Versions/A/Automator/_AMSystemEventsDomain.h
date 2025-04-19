@class NSString, _AMSystemEventsFolder;

@interface _AMSystemEventsDomain : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) _AMSystemEventsFolder *applicationSupportFolder;
@property (readonly, copy) _AMSystemEventsFolder *applicationsFolder;
@property (readonly, copy) _AMSystemEventsFolder *desktopPicturesFolder;
@property (readonly, copy) _AMSystemEventsFolder *FolderActionScriptsFolder;
@property (readonly, copy) _AMSystemEventsFolder *fontsFolder;
@property (readonly, copy) _AMSystemEventsFolder *libraryFolder;
@property (readonly, copy) NSString *name;
@property (readonly, copy) _AMSystemEventsFolder *preferencesFolder;
@property (readonly, copy) _AMSystemEventsFolder *scriptingAdditionsFolder;
@property (readonly, copy) _AMSystemEventsFolder *scriptsFolder;
@property (readonly, copy) _AMSystemEventsFolder *sharedDocumentsFolder;
@property (readonly, copy) _AMSystemEventsFolder *speakableItemsFolder;
@property (readonly, copy) _AMSystemEventsFolder *utilitiesFolder;
@property (readonly, copy) _AMSystemEventsFolder *workflowsFolder;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (id)folders;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
