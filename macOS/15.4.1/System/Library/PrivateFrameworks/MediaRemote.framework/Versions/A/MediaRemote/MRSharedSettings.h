@interface MRSharedSettings : NSObject

@property (class, readonly, nonatomic) MRSharedSettings *currentSettings;

@property (readonly, nonatomic, getter=isMultiplayerAware) BOOL multiplayerAware;
@property (readonly, nonatomic, getter=isMultiplayerHost) BOOL multiplayerHost;
@property (readonly, nonatomic) BOOL canHostMultiplayerStream;
@property (readonly, nonatomic) BOOL supportNanoStandalone;
@property (readonly, nonatomic) BOOL supportShowMore;
@property (readonly, nonatomic) BOOL supportNowPlayingSessionDataSource;
@property (readonly, nonatomic) BOOL supportSessionBasedUI;
@property (readonly, nonatomic) BOOL supportSessionBasedLockScreenPlatter;
@property (readonly, nonatomic) BOOL supportLockScreenBackground;
@property (readonly, nonatomic) double quickControlsInactiveTimeout;
@property (readonly, nonatomic) double lockScreenAPLTarget;
@property (readonly, nonatomic) double lockScreenAPLRatio;
@property (readonly, nonatomic) BOOL supportGroupSession;
@property (readonly, nonatomic) BOOL supportGroupSessionHome;
@property (readonly, nonatomic) BOOL supportGroupSessionHomePodBoop;
@property (readonly, nonatomic) BOOL supportAirPlayLeaderInfoSync;
@property (readonly, nonatomic) BOOL allowSingleRoomExpandedRows;
@property (readonly, nonatomic) BOOL showMembersInsteadOfRooms;
@property (readonly, nonatomic) double oneTapSuggestionInactiveTimeout;
@property (readonly, nonatomic) double autoRouteInactiveTimeout;
@property (readonly, nonatomic) double afterRoutingCompleteTimeout;
@property (readonly, nonatomic) BOOL supportManyRecommendationsPlatters;
@property (readonly, nonatomic) BOOL suppressScreenMirroringErrors;
@property (readonly, nonatomic) BOOL verboseImageLoadingLogging;
@property (readonly, nonatomic) BOOL verboseMediaControlLogging;
@property (readonly, nonatomic) BOOL supportPTOTRefactorPart2;

@end
