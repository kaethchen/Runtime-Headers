@class NSArray, NSSet, NSString, MPCPlayerResponseSection;

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand, MPCPlayerInsertAfterLastSectionCommand>

@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) BOOL supportsCreateStation;
@property (nonatomic) unsigned long long supportedInsertionPositions;
@property (nonatomic) unsigned long long supportedQueueTypes;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers;
@property (retain, nonatomic) MPCPlayerResponseSection *lastSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) MPCPlayerResponseSection *section;

- (void).cxx_destruct;
- (id)insertPlaybackIntent:(id)a0 afterItem:(id)a1;
- (id)_createRadioStationCommandRequest;
- (id)_insertWithOptions:(id)a0;
- (BOOL)_isSupportedPlaybackIntent:(id)a0 atInsertionPosition:(int)a1;
- (id)insertAfterLastSection;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)a0;
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)a0;
- (id)insertAtEndOfUpNextWithPlaybackIntent:(id)a0;
- (id)insertWithPlaybackIntent:(id)a0;

@end
