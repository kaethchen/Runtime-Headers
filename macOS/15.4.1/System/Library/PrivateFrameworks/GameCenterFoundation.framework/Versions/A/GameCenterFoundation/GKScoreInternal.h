@class NSString, NSDate, GKPlayerInternal;

@interface GKScoreInternal : GKInternalRepresentation

@property (readonly, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *groupCategory;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) NSString *groupLeaderboardIdentifier;
@property (retain, nonatomic) NSString *formattedValue;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL valueSet;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)serverRepresentation;

@end
