@interface ILiPhotoMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (id)modificationDate;
- (id)albumsInDictionary:(id)a0;
- (id)dBasePath;
- (id)dictionaryWithAlbums:(id)a0;
- (id)dictionaryWithPhotos:(id)a0;
- (id)iPhotoApplicationVersion;
- (id)photosInDictionary:(id)a0;
- (void)warningSupressor;

@end
