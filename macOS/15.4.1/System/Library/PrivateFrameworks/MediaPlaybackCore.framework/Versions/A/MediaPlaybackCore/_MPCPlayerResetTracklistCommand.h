@class NSArray, NSDictionary, NSSet, NSString;

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand <MPCPlayerResetTracklistCommand>

@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSDictionary *supportedSpecializedQueues;
@property (nonatomic) BOOL supportsSetQueueCommand;
@property (nonatomic) unsigned long long supportedQueueTypes;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers;
@property (readonly, nonatomic) NSArray *specializedIntents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)clear;
- (id)clearUpNextItems;
- (id)replaceWithPlaybackIntent:(id)a0;
- (id)replaceWithPlaybackIntent:(id)a0 replaceIntent:(long long)a1;

@end
