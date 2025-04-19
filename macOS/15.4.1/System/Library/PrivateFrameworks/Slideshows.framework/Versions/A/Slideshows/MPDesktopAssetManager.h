@class NSMutableDictionary, MLMediaSource, NSMutableSet, MLMediaLibrary;

@interface MPDesktopAssetManager : MPAssetManager {
    MLMediaLibrary *_mediaLibrary;
    MLMediaSource *_iPhotoMediaSource;
    MLMediaSource *_apertureMediaSource;
    MLMediaSource *_iTunesMediaSource;
    MLMediaSource *_garageBandMediaSource;
    MLMediaSource *_logicMediaSource;
    MLMediaSource *_iMovieMediaSource;
    MLMediaSource *_foldersMediaSource;
    NSMutableSet *_pendingMediaGroups;
    NSMutableDictionary *_mediaObjects;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)absolutePathFromPath:(id)a0;
- (double)altitudeForAssetAtPath:(id)a0;
- (id)contentCreationDateForImageAtPath:(id)a0;
- (id)creationDateForAssetAtPath:(id)a0;
- (double)durationForAssetAtPath:(id)a0;
- (id)exifPropertiesForImageAtPath:(id)a0;
- (id)findMediaObjectWithPathInILMB:(id)a0;
- (id)initWithMediaSources:(unsigned long long)a0;
- (id)keywordsForAssetAtPath:(id)a0;
- (double)latitudeForAssetAtPath:(id)a0;
- (id)locationHierarchyForAssetAtPath:(id)a0;
- (double)longitudeForAssetAtPath:(id)a0;
- (unsigned long long)mediaTypeForAssetAtPath:(id)a0;
- (struct CGSize { double x0; double x1; })resolutionForAssetAtPath:(id)a0;
- (double)startTimeForAssetAtPath:(id)a0;
- (double)stopTimeForAssetAtPath:(id)a0;

@end
