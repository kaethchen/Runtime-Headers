@class NSString, NSArray, NSDictionary, NSUUID, NSNumber;

@interface HMDMediaPlaybackActionEvent : HMMDatedLogEvent <HMDBiomeLogEvent, HMMCoreAnalyticsLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) BOOL isPlaybackArchivePresent;
@property (readonly, copy) NSNumber *playbackStateNumber;
@property (readonly, copy) NSNumber *volumeNumber;
@property (readonly, copy) NSNumber *sourceNumber;
@property (readonly, copy) NSString *sourceClientName;
@property (readonly, copy) NSString *clientMetricIdentifier;
@property (readonly) unsigned long long numberOfMediaProfiles;
@property (readonly, copy) NSArray *accessories;
@property (readonly, nonatomic) unsigned long long numAccessoriesInHome;
@property (readonly, nonatomic) unsigned long long numNonEmptyScenesInHome;
@property (readonly, copy) NSString *playbackStateString;
@property (readonly, copy) NSString *sourceString;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)biomeEventsRepresentationForLogObserver:(id)a0;
- (id)initWithIsPlaybackArchivePresent:(BOOL)a0 playbackStateNumber:(id)a1 volumeNumber:(id)a2 sourceNumber:(id)a3 sourceClientName:(id)a4 accessories:(id)a5;

@end
