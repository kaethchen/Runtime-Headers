@class _AMSystemEventsFolder;

@interface _AMSystemEventsUserDomainObject : _AMSystemEventsDomain

@property (readonly, copy) _AMSystemEventsFolder *desktopFolder;
@property (readonly, copy) _AMSystemEventsFolder *documentsFolder;
@property (readonly, copy) _AMSystemEventsFolder *downloadsFolder;
@property (readonly, copy) _AMSystemEventsFolder *favoritesFolder;
@property (readonly, copy) _AMSystemEventsFolder *homeFolder;
@property (readonly, copy) _AMSystemEventsFolder *moviesFolder;
@property (readonly, copy) _AMSystemEventsFolder *musicFolder;
@property (readonly, copy) _AMSystemEventsFolder *picturesFolder;
@property (readonly, copy) _AMSystemEventsFolder *publicFolder;
@property (readonly, copy) _AMSystemEventsFolder *sitesFolder;
@property (readonly, copy) _AMSystemEventsFolder *temporaryItemsFolder;

- (id)folders;

@end
