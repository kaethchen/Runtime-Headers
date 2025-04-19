@class NSArray, NSMutableDictionary, NSMutableSet, PIESubsequenceSliceParams, NSMutableArray, NSDictionary;

@interface PIESlicerParams : NSObject {
    unsigned long long _initialSlicesPerSpread;
    unsigned long long _slicesPerSpread;
    NSMutableDictionary *_sliceTypeUserInfos;
    id /* block */ _spreadPhotoValidator;
    id /* block */ _spreadValidator;
    NSMutableDictionary *_holeCountFavorability;
    NSDictionary *_comparativeHoleCountFavorabilityMap;
}

@property (readonly, nonatomic) NSMutableSet *allValidHoleCounts;
@property (readonly, nonatomic) NSArray *allValidHoleCountsSorted;
@property (readonly, nonatomic) NSMutableArray *leadingSubsequenceSliceParams;
@property (readonly, nonatomic) PIESubsequenceSliceParams *repeatingSubsequenceSliceParams;
@property (readonly, nonatomic) NSMutableArray *trailingSubsequenceSliceParams;
@property (nonatomic) unsigned long long spreadSliceAlignmentOffset;
@property (nonatomic) unsigned long long nominalSlicesPerSpread;
@property (nonatomic) unsigned long long maxSectorLevels;
@property (retain, nonatomic) NSArray *sectorSliceMinCountPerLevel;
@property (nonatomic) unsigned long long maxSliceCount;
@property (nonatomic) unsigned long long minSliceCount;
@property (nonatomic) unsigned long long validNumSliceCountMultiple;
@property (retain, nonatomic) NSArray *repeatingSequenceFavoredHoleCountCycle;
@property (readonly, nonatomic) PIESubsequenceSliceParams *spreadSliceSubsequenceParams;
@property (nonatomic) long long minSpreadCountSeparatingSpreadSlices;
@property (nonatomic) double maxSpreadSliceCountPercent;
@property (nonatomic) long long maxNominalSpreadHoleCount;
@property (nonatomic) BOOL preservePhotoOrder;
@property (nonatomic) BOOL performSpreadAlignment;
@property (readonly, nonatomic) NSMutableArray *ignoredPhotos;

- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (id /* block */)spreadValidator;
- (void)addLeadingSequenceHoleCounts:(id)a0 forNextNumSlices:(unsigned long long)a1 sliceUserInfo:(id)a2;
- (void)addTrailingSequenceHoleCounts:(id)a0 forNextNumSlices:(unsigned long long)a1 sliceUserInfo:(id)a2;
- (id)comparativeHoleCountFavorabilityMap;
- (BOOL)isValidHoleCount:(unsigned long long)a0 forIndex:(unsigned long long)a1;
- (BOOL)isValidHoleCount:(unsigned long long)a0 forReverseIndex:(unsigned long long)a1;
- (void)setFavorability:(double)a0 forHoleCount:(long long)a1;
- (void)setRepeatingSequenceHoleCounts:(id)a0 sliceUserInfo:(id)a1;
- (void)setSpreadPhotoValidator:(id /* block */)a0;
- (void)setSpreadSliceHoleCounts:(id)a0 sliceUserInfo:(id)a1;
- (void)setSpreadValidator:(id /* block */)a0;
- (void)setUserInfoForSliceType:(int)a0 userInfo:(id)a1;
- (id /* block */)spreadPhotoValidator;
- (id)subsequenceSliceParamsForIdx:(unsigned long long)a0;
- (id)subsequenceSliceParamsForIdx:(unsigned long long)a0 totalSlices:(long long)a1;
- (id)userInfoForSliceIdx:(unsigned long long)a0 totalSlices:(unsigned long long)a1;
- (id)userInfoForSliceType:(int)a0;

@end
