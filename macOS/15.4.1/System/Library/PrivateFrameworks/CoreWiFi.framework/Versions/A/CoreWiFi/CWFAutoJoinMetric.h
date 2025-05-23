@class NSError, NSString, NSArray, NSDate, SFRemoteHotspotDevice, CWFAutoJoinParameters, NSDictionary, CWFScanResult;

@interface CWFAutoJoinMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
@property (copy, nonatomic) NSDate *matchedCandidateAt;
@property (copy, nonatomic) NSDate *joinStartedAt;
@property (copy, nonatomic) NSDate *joinEndedAt;
@property (copy, nonatomic) NSDate *routableIPv4AddressAt;
@property (copy, nonatomic) NSDate *primaryIPv4InterfaceAt;
@property (copy, nonatomic) NSDate *routableIPv6AddressAt;
@property (copy, nonatomic) NSDate *primaryIPv6InterfaceAt;
@property (copy, nonatomic) NSDate *triggeredByLinkDownAt;
@property (copy, nonatomic) NSDate *triggeredByDeviceWakeAt;
@property (copy, nonatomic) NSDate *triggeredByFirstUnlockAt;
@property (copy, nonatomic) NSDate *triggeredByWiFiOnAt;
@property (copy, nonatomic) NSDate *triggeredByMotionEndedAt;
@property (copy, nonatomic) NSDate *triggeredByAutoJoinEnabledAt;
@property (nonatomic) unsigned long long linkRecoveryDelay;
@property (nonatomic) BOOL didJoinPreviouslyAssociatedNetwork;
@property (nonatomic) BOOL result;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) BOOL wasCancelled;
@property (nonatomic) BOOL wasAborted;
@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters;
@property (nonatomic) long long retrySchedule;
@property (nonatomic) unsigned long long retryScheduleIndex;
@property (nonatomic) BOOL was6EDisabled;
@property (nonatomic) BOOL was6EPreferOn;
@property (nonatomic) BOOL was6GHzDeprioritized;
@property (copy, nonatomic) CWFScanResult *wasAlreadyAssociatedToNetwork;
@property (nonatomic) BOOL didUseLocationOptimizedChannelList;
@property (nonatomic) BOOL didDetectColocatedNetworkEnvironment;
@property (nonatomic) BOOL didDeferJoinToDiscoverMorePreferredNetwork;
@property (nonatomic) BOOL didFallbackToJoinLessPreferredNetwork;
@property (nonatomic) BOOL didJoinDeferredNetwork;
@property (nonatomic) BOOL didJoinPreviouslyLowRSSINetwork;
@property (nonatomic) unsigned long long scanDuration;
@property (copy, nonatomic) NSArray *scanChannels;
@property (nonatomic) unsigned long long preAssociationScanDuration;
@property (copy, nonatomic) NSArray *preAssociationScanChannels;
@property (copy, nonatomic) NSArray *scanErrors;
@property (nonatomic) unsigned long long GASQueryDuration;
@property (copy, nonatomic) NSArray *GASQueryNetworks;
@property (copy, nonatomic) NSArray *GASQueryErrors;
@property (copy, nonatomic) CWFScanResult *autoJoinedNetwork;
@property (copy, nonatomic) NSArray *joinErrors;
@property (nonatomic) BOOL didExcludeLowRSSINetwork;
@property (nonatomic) BOOL didExcludePartiallyMatchedNetwork;
@property (nonatomic) BOOL didExcludeDisabledNetwork;
@property (nonatomic) BOOL didExcludeDisallowedNetwork;
@property (nonatomic) BOOL didPerformSeamlessSSIDTransition;
@property (nonatomic) BOOL didTriggerReassoc;
@property (copy, nonatomic) NSArray *preferredChannelList;
@property (copy, nonatomic) NSArray *recentChannelList;
@property (copy, nonatomic) NSArray *remainingChannelList;
@property (copy, nonatomic) NSArray *channelList;
@property (nonatomic) BOOL didExcludeStandalone6GHzNetwork;
@property (nonatomic) BOOL didExclude6GHzOnlyNetwork;
@property (nonatomic) BOOL wasDiscoveredVia6GHzFollowup;
@property (nonatomic) BOOL wasDiscoveredViaRNR;
@property (nonatomic) BOOL wasDiscoveredViaFILSD;
@property (nonatomic) unsigned long long followup6GHzScanDuration;
@property (copy, nonatomic) NSArray *followup6GHzScanChannels;
@property (nonatomic) BOOL didIncludeRemainingNon2GHzChannels;
@property (copy, nonatomic) CWFScanResult *userJoinedNetwork;
@property (copy, nonatomic) NSDate *userJoinedNetworkAt;
@property (nonatomic) BOOL didUserJoinLowRSSINetwork;
@property (nonatomic) BOOL didUserJoinPartiallyMatchedNetwork;
@property (nonatomic) BOOL didUserJoinDisallowedNetwork;
@property (nonatomic) BOOL didUserJoinKnownNetwork;
@property (nonatomic) BOOL didUserJoinDeferredNetwork;
@property (nonatomic) unsigned long long candidateBSSCount;
@property (nonatomic) unsigned long long candidateSSIDCount;
@property (nonatomic) long long bestCandidateRSSI;
@property (nonatomic) BOOL wasLockdownModeEnabled;
@property (nonatomic) BOOL autoHotspotWasAttempted;
@property (nonatomic) BOOL autoHotspotResult;
@property (copy, nonatomic) NSDate *autoHotspotStartedAt;
@property (copy, nonatomic) NSDate *autoHotspotEndedAt;
@property (nonatomic) BOOL autoHotspotWasAborted;
@property (copy, nonatomic) NSError *autoHotspotError;
@property (nonatomic) long long autoHotspotMode;
@property (nonatomic) unsigned long long autoHotspotBrowseDuration;
@property (copy, nonatomic) NSError *autoHotspotBrowseError;
@property (copy, nonatomic) NSDate *autoHotspotJoinStartedAt;
@property (copy, nonatomic) NSArray *autoHotspotJoinErrors;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspot;
@property (readonly) NSString *coreAnalyticsEventName;
@property (readonly) NSDictionary *coreAnalyticsEventPayload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)__descriptionForError:(id)a0;
- (BOOL)isEqualToAutoJoinMetric:(id)a0;

@end
