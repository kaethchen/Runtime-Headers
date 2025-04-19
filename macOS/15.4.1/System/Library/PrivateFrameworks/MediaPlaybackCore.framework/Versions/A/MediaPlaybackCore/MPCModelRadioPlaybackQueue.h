@class _MPCModelRadioPlaybackQueueStationTracksCollection, MPModelRadioStation, MPSectionedCollection, MPCModelGenericAVItemUserIdentityPropertySet;

@interface MPCModelRadioPlaybackQueue : NSObject {
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;
}

@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (readonly, nonatomic) long long numberOfItems;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (readonly, nonatomic) MPSectionedCollection *trackModels;
@property (readonly, nonatomic) MPSectionedCollection *tracks;

- (void).cxx_destruct;
- (void)removeAllItems;
- (id)initWithPlaybackContext:(id)a0;
- (id)AVItemAtIndex:(long long)a0;
- (void)updateWithPersonalizedResponse:(id)a0;
- (BOOL)isExplicitItemAtIndex:(long long)a0;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)a0;
- (id)tracksByApplyingTracksResponse:(id)a0 currentIndex:(long long)a1;

@end
