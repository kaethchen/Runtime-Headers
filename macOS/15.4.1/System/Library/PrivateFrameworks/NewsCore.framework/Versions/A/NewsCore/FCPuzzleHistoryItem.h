@class NSString, NSData, NSDate, NSNumber, CKRecord;

@interface FCPuzzleHistoryItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *puzzleID;
@property (readonly, copy, nonatomic) NSString *puzzleTypeID;
@property (readonly, nonatomic) NSData *progressData;
@property (readonly, nonatomic) long long progressLevel;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSString *rankID;
@property (readonly, nonatomic) NSNumber *usedReveal;
@property (readonly, nonatomic) long long playDuration;
@property (readonly, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) NSDate *completedDate;
@property (readonly, nonatomic) NSDate *firstCompletedDate;
@property (readonly, nonatomic) NSNumber *firstPlayDuration;
@property (readonly, nonatomic) NSNumber *bestScore;
@property (readonly, nonatomic) NSNumber *difficulty;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSNumber *behaviorFlags;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 puzzleID:(id)a1 puzzleTypeID:(id)a2 progressData:(id)a3 progressLevel:(long long)a4 score:(id)a5 rankID:(id)a6 usedReveal:(id)a7 playDuration:(long long)a8 lastPlayedDate:(id)a9 completedDate:(id)a10 firstCompletedDate:(id)a11 firstPlayDuration:(id)a12 bestScore:(id)a13 difficulty:(id)a14 publishDate:(id)a15 behaviorFlags:(id)a16;

@end
