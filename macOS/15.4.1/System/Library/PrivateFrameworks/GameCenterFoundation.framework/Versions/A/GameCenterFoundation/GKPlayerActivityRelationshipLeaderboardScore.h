@class NSString, GKPlayerActivityRelationshipPlayer;

@interface GKPlayerActivityRelationshipLeaderboardScore : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerActivityRelationshipPlayer *player;
@property (retain, nonatomic) NSString *score;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL gained;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *symbol;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
