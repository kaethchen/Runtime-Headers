@class NSArray;

@interface ML3SpotlightBatchDonationObject : NSObject {
    long long _currentRevision;
    long long _targetRevision;
    NSArray *_trackPersistentIDsToUpdate;
    NSArray *_playlistsPersistentIDsToUpdate;
    NSArray *_entityStringsToDelete;
}

- (void).cxx_destruct;
- (long long)currentRevision;
- (id)entityStringsToDelete;
- (id)initWithCurrentRevision:(long long)a0 targetRevision:(long long)a1 trackPersistentIDsToUpdate:(id)a2 playlistsPersistentIDsToUpdate:(id)a3 entityStringsToDelete:(id)a4;
- (id)playlistsPersistentIDsToUpdate;
- (long long)targetRevision;
- (id)trackPersistentIDsToUpdate;

@end
