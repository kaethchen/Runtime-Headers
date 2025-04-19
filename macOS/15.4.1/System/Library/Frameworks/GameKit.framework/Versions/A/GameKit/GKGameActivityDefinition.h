@class NSString, NSDictionary, NSURL, NSArray;

@interface GKGameActivityDefinition : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ groupIdentifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ details;
    void /* unknown type, empty encoding */ defaultProperties;
    void /* unknown type, empty encoding */ associatedLeaderboardIDs;
    void /* unknown type, empty encoding */ associatedAchievementDescriptionIDs;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ supportsPartyCode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ _fallbackURL;
@property (nonatomic, readonly) NSURL *fallbackURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageURL;
@property (nonatomic, retain) void /* unknown type, empty encoding */ maxPlayers;
@property (nonatomic, retain) void /* unknown type, empty encoding */ minPlayers;
@property (nonatomic, readonly) NSDictionary *defaultProperties;
@property (nonatomic, readonly) BOOL supportsUnlimitedPlayers;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ playStyle;
@property (nonatomic, readonly) NSArray *associatedLeaderboardIDs;
@property (nonatomic, readonly) NSArray *associatedAchievementDescriptionIDs;

+ (void)loadGameActivityDefinitionsWithCompletionHandler:(id /* block */)a0;
+ (void)loadGameActivityDefinitionsWithIDs:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 groupIdentifier:(id)a1 title:(id)a2 details:(id)a3 supportPartyCode:(BOOL)a4 fallbackURL:(id)a5 maxPlayers:(id)a6 minPlayers:(id)a7 defaultProperties:(id)a8 imageURL:(id)a9 playStyle:(long long)a10 associatedLeaderboardIDs:(id)a11 associatedAchievementDescriptionIDs:(id)a12;
- (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)a0;
- (void)loadLeaderboardsWithCompletionHandler:(id /* block */)a0;

@end
