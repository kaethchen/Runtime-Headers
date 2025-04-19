@class NSArray;

@interface ML3SetCloudIDImportOperation : ML3ImportOperation {
    NSArray *_trackInfo;
    NSArray *_playlistInfo;
}

- (void).cxx_destruct;
- (void)main;
- (unsigned long long)importSource;
- (BOOL)_importPlaylistsUsingImportSession:(void *)a0;
- (BOOL)_importTracksUsingImportSession:(void *)a0;
- (BOOL)_performImportWithTransaction:(id)a0;

@end
