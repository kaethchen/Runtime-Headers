@class GKGameRecordInternal, NSDate, GKPlayerInternal;

@interface GKRecentMatchInternal : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) GKGameRecordInternal *game;
@property (retain, nonatomic) NSDate *date;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
