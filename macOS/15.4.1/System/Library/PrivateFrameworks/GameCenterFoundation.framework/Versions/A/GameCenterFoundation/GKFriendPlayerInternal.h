@class NSString, GKGameInternal, NSDate;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
    BOOL _challengedTogether;
    GKGameInternal *_lastChallengedGame;
    NSDate *_lastChallengedDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)status;
- (void)setStatus:(id)a0;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)a0;
- (id)lastPlayedGame;
- (BOOL)challengedTogether;
- (int)defaultFamiliarity;
- (BOOL)isFriend;
- (id)lastChallengedDate;
- (id)lastChallengedGame;
- (void)setChallengedTogether:(BOOL)a0;
- (void)setLastChallengedDate:(id)a0;
- (void)setLastChallengedGame:(id)a0;
- (void)setLastPlayedGame:(id)a0;

@end
