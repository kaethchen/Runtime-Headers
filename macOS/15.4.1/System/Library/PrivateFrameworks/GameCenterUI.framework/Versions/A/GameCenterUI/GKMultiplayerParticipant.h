@class NSString, GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (readonly, nonatomic) NSString *statusName;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) long long number;
@property (nonatomic) BOOL isPlaceHolderItem;
@property (readonly, nonatomic) BOOL isSharePlayInvitee;

+ (id)allStatuses;
+ (id)stringFromGKMultiplayerParticipantStatus:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
