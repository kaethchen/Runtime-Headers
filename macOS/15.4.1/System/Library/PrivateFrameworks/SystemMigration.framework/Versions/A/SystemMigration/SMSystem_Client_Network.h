@class NSString, NSImage, NSOrderedSet, NSDictionary, NSNumber;

@interface SMSystem_Client_Network : SMSystem_Client

@property (retain) NSImage *icon;
@property (retain) NSNumber *passcode;
@property (retain) NSString *handoffHint;
@property BOOL connected;
@property (retain) NSOrderedSet *fasterInterfaceRecommendations;
@property (retain) NSDictionary *allEstablishedConnections;
@property BOOL availableInSystemLists;
@property (readonly) NSString *model;
@property unsigned long long networkState;
@property (readonly) BOOL sourceKnowsPasscode;
@property (readonly) NSString *fasterInterfaceRecommendation;
@property (readonly) unsigned long long effectiveConnectionMethod;
@property (readonly) NSOrderedSet *connectionFamilies;
@property BOOL isAttemptingWirelessSwitch;

+ (void)initialize;
+ (id)guiMonitorKeys;
+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendation;
+ (id)longTermIdentifierWithNameMatch:(id)a0;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayState;
- (BOOL)isMounted;
- (long long)defaultUIRank;
- (BOOL)matchesLongTermIdentifier:(id)a0;
- (id)volumeIconAccesibilityLabel;

@end
