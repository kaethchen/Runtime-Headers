@interface PFPendingDownloadRemovals : NSObject {
    void /* unknown type, empty encoding */ episodesPendingDeletion;
}

- (id)init;
- (void).cxx_destruct;
- (void)appendEpisodeUUIDsForDeletion:(id)a0;
- (id)initFromUserDefaults:(id)a0;
- (void)writeToUserDefaults:(id)a0;

@end
