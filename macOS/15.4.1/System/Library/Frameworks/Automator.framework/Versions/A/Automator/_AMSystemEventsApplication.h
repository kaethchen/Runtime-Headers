@class _AMSystemEventsUserDomainObject, _AMSystemEventsDesktop, _AMSystemEventsFolder, _AMSystemEventsScreenSaver, _AMSystemEventsLocalDomainObject, _AMSystemEventsAppearancePreferencesObject, _AMSystemEventsNetworkDomainObject, _AMSystemEventsDockPreferencesObject, _AMSystemEventsNetworkPreferencesObject, _AMSystemEventsUser, NSString, _AMSystemEventsScriptingDefinitionObject, _AMSystemEventsCDAndDVDPreferencesObject, _AMSystemEventsSecurityPreferencesObject, _AMSystemEventsSystemDomainObject, _AMSystemEventsClassicDomainObject, _AMSystemEventsScreenSaverPreferencesObject, _AMSystemEventsDisk;

@interface _AMSystemEventsApplication : SBApplication

@property long long quitDelay;
@property (readonly) BOOL scriptMenuEnabled;
@property (readonly, copy) _AMSystemEventsUser *currentUser;
@property (copy) _AMSystemEventsAppearancePreferencesObject *appearancePreferences;
@property (copy) _AMSystemEventsCDAndDVDPreferencesObject *CDAndDVDPreferences;
@property (readonly, copy) _AMSystemEventsDesktop *currentDesktop;
@property (copy) _AMSystemEventsDockPreferencesObject *dockPreferences;
@property (copy) _AMSystemEventsNetworkPreferencesObject *networkPreferences;
@property (copy) _AMSystemEventsScreenSaver *currentScreenSaver;
@property (copy) _AMSystemEventsScreenSaverPreferencesObject *screenSaverPreferences;
@property (copy) _AMSystemEventsSecurityPreferencesObject *securityPreferences;
@property (readonly, copy) _AMSystemEventsFolder *applicationSupportFolder;
@property (readonly, copy) _AMSystemEventsFolder *applicationsFolder;
@property (readonly, copy) _AMSystemEventsClassicDomainObject *ClassicDomain;
@property (readonly, copy) _AMSystemEventsFolder *desktopFolder;
@property (readonly, copy) _AMSystemEventsFolder *desktopPicturesFolder;
@property (readonly, copy) _AMSystemEventsFolder *documentsFolder;
@property (readonly, copy) _AMSystemEventsFolder *downloadsFolder;
@property (readonly, copy) _AMSystemEventsFolder *favoritesFolder;
@property (readonly, copy) _AMSystemEventsFolder *FolderActionScriptsFolder;
@property (readonly, copy) _AMSystemEventsFolder *fontsFolder;
@property (readonly, copy) _AMSystemEventsFolder *homeFolder;
@property (readonly, copy) _AMSystemEventsFolder *libraryFolder;
@property (readonly, copy) _AMSystemEventsLocalDomainObject *localDomain;
@property (readonly, copy) _AMSystemEventsFolder *moviesFolder;
@property (readonly, copy) _AMSystemEventsFolder *musicFolder;
@property (readonly, copy) _AMSystemEventsNetworkDomainObject *networkDomain;
@property (readonly, copy) _AMSystemEventsFolder *picturesFolder;
@property (readonly, copy) _AMSystemEventsFolder *preferencesFolder;
@property (readonly, copy) _AMSystemEventsFolder *publicFolder;
@property (readonly, copy) _AMSystemEventsFolder *scriptingAdditionsFolder;
@property (readonly, copy) _AMSystemEventsFolder *scriptsFolder;
@property (readonly, copy) _AMSystemEventsFolder *sharedDocumentsFolder;
@property (readonly, copy) _AMSystemEventsFolder *sitesFolder;
@property (readonly, copy) _AMSystemEventsFolder *speakableItemsFolder;
@property (readonly, copy) _AMSystemEventsDisk *startupDisk;
@property (readonly, copy) _AMSystemEventsSystemDomainObject *systemDomain;
@property (readonly, copy) _AMSystemEventsFolder *temporaryItemsFolder;
@property (readonly, copy) _AMSystemEventsFolder *trash;
@property (readonly, copy) _AMSystemEventsUserDomainObject *userDomain;
@property (readonly, copy) _AMSystemEventsFolder *utilitiesFolder;
@property (readonly, copy) _AMSystemEventsFolder *workflowsFolder;
@property BOOL folderActionsEnabled;
@property (readonly) BOOL UIElementsEnabled;
@property (readonly, copy) _AMSystemEventsScriptingDefinitionObject *scriptingDefinition;
@property (readonly, copy) NSString *name;
@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *version;

+ (id)application;

- (long long)beginTransaction;
- (void)endTransaction;
- (id)processes;
- (id)windows;
- (id)documents;
- (id)open:(id)a0;
- (id)users;
- (id)loginItems;
- (id)domains;
- (id)aliases;
- (id)files;
- (id)disks;
- (BOOL)exists:(id)a0;
- (id)UIElements;
- (id)folders;
- (void)sleep;
- (void)abortTransaction;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)QuickTimeDatas;
- (id)QuickTimeFiles;
- (id)XMLDatas;
- (id)XMLFiles;
- (id)applicationProcesses;
- (id)audioDatas;
- (id)audioFiles;
- (id)clickAt:(id)a0;
- (id)deskAccessoryProcesses;
- (id)desktops;
- (id)diskItems;
- (id)filePackages;
- (id)folderActions;
- (void)keyCode:(id)a0 using:(id)a1;
- (void)keystroke:(id)a0 using:(id)a1;
- (void)logOut;
- (id)move:(id)a0 to:(id)a1;
- (id)movieDatas;
- (id)movieFiles;
- (void)print:(id)a0 withProperties:(id)a1 printDialog:(BOOL)a2;
- (id)propertyListFiles;
- (id)propertyListItems;
- (void)quitSaving:(int)a0;
- (void)restartStateSavingPreference:(BOOL)a0;
- (id)screenSavers;
- (void)shutDownStateSavingPreference:(BOOL)a0;

@end
