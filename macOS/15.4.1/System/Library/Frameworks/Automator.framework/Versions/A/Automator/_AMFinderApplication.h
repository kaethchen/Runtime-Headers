@class _AMFinderComputerObject, NSString, _AMFinderPreferences, _AMFinderTrashObject, _AMFinderDisk, _AMFinderFolder, _AMFinderFile, SBObject, _AMFinderDesktopObject;

@interface _AMFinderApplication : SBApplication

@property (copy) _AMFinderFile *desktopPicture;
@property (readonly, copy) SBObject *clipboard;
@property (readonly, copy) NSString *name;
@property BOOL visible;
@property BOOL frontmost;
@property (copy) SBObject *selection;
@property (readonly, copy) SBObject *insertionLocation;
@property (readonly, copy) NSString *productVersion;
@property (readonly, copy) NSString *version;
@property (readonly, copy) _AMFinderDisk *startupDisk;
@property (readonly, copy) _AMFinderDesktopObject *desktop;
@property (readonly, copy) _AMFinderTrashObject *trash;
@property (readonly, copy) _AMFinderFolder *home;
@property (readonly, copy) _AMFinderComputerObject *computerContainer;
@property (readonly, copy) _AMFinderPreferences *FinderPreferences;

+ (id)application;

- (void)activate;
- (id)windows;
- (id)items;
- (void)quit;
- (id)packages;
- (id)containers;
- (void)restart;
- (id)files;
- (id)disks;
- (void)eject;
- (void)shutDown;
- (id)folders;
- (void)sleep;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)FinderWindows;
- (id)clippingWindows;
- (id)aliasFiles;
- (id)applicationFiles;
- (id)clippings;
- (id)documentFiles;
- (void)emptySecurity:(BOOL)a0;
- (id)internetLocationFiles;

@end
