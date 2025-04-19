@class _AMSystemEventsFolder;

@interface _AMSystemEventsClassicDomainObject : _AMSystemEventsDomain

@property (readonly, copy) _AMSystemEventsFolder *appleMenuFolder;
@property (readonly, copy) _AMSystemEventsFolder *controlPanelsFolder;
@property (readonly, copy) _AMSystemEventsFolder *controlStripModulesFolder;
@property (readonly, copy) _AMSystemEventsFolder *desktopFolder;
@property (readonly, copy) _AMSystemEventsFolder *extensionsFolder;
@property (readonly, copy) _AMSystemEventsFolder *fontsFolder;
@property (readonly, copy) _AMSystemEventsFolder *launcherItemsFolder;
@property (readonly, copy) _AMSystemEventsFolder *preferencesFolder;
@property (readonly, copy) _AMSystemEventsFolder *shutdownFolder;
@property (readonly, copy) _AMSystemEventsFolder *startupItemsFolder;
@property (readonly, copy) _AMSystemEventsFolder *systemFolder;

- (id)folders;

@end
