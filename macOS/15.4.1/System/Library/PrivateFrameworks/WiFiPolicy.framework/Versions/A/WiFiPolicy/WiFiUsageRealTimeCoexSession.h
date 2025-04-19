@class NSString, NSDate;

@interface WiFiUsageRealTimeCoexSession : WiFiUsageSession

@property unsigned long long rtCoexType;
@property (retain) NSString *rtCoexSubType;
@property unsigned long long lastRequestType;
@property unsigned long long lastRequestPreferredChannel;
@property int lastRequestPreferredBand;
@property BOOL lastRequestDifferentSSID;
@property (retain) NSString *lastRequestPreferredSSID;
@property (retain) NSString *lastRequestPreferredBSS;
@property BOOL isSplitSSID;
@property BOOL hasCandidates;
@property BOOL hasDifferentIpv4DetailsAfterSSIDTransition;
@property BOOL hasDifferentIpv6DetailsAfterSSIDTransition;
@property BOOL isRtCoexOptimal;
@property (retain) NSDate *firstRtCoexOptimal;
@property (retain) NSDate *lastRtCoexOptimalStatusChange;
@property double rtCoexInOptimalDuration;
@property (retain) NSDate *lastEnterPreferredChannel;
@property double preferredChannelDuration;
@property (retain) NSDate *lastEnterPreferredBand;
@property double preferredBandDuration;
@property (retain) NSDate *firstSSIDTransition;
@property (retain) NSDate *firstIPUpdateAfterSSIDTransition;
@property (retain) NSDate *firstManualJoin;
@property (retain) NSDate *firstManualJoinAfterSSIDTransition;
@property unsigned long long requestSteerToPreferredChannelCount;
@property unsigned long long requestSteerCount;
@property unsigned long long requestDisconnectCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)metricName;
- (void)sessionDidStart;
- (void)updateAssociatedNetworkDetails:(id)a0;
- (id)eventDictionary:(BOOL)a0;
- (id)eventDictionaryByBand:(int)a0 isFirst:(BOOL)a1;
- (BOOL)infraIsPartOfSplitSSID;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (BOOL)isCurrentBandPreferredBand;
- (BOOL)isCurrentChannelPreferredChannel;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)processIPv4Changes:(id)a0;
- (void)processIPv6Changes:(id)a0;
- (void)setPreferredChannelAndBandUsageWithReferenceDate:(id)a0;
- (void)setRealTimeCoexStatus:(BOOL)a0 type:(unsigned long long)a1;
- (void)setRealtimeCoexStarted:(BOOL)a0 type:(unsigned long long)a1 reasons:(id)a2;
- (void)setSteeringRequest:(unsigned long long)a0 preferredChannel:(unsigned long long)a1 preferredBand:(int)a2 preferredSSID:(id)a3 targetSSIDDiffersFromCurrent:(BOOL)a4 preferredBSS:(id)a5 ssidIsSplit:(BOOL)a6 transitionCandidates:(BOOL)a7;
- (void)summarizeSession;
- (void)updatePreferredChannelAndBandUsageWithReferenceDate:(id)a0;
- (void)updateRtCoexInOptimalDuration:(BOOL)a0;

@end
