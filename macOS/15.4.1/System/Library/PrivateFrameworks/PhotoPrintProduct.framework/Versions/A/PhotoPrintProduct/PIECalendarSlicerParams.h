@class NSSet, NSArray, NSMutableDictionary, NSDate, NSMutableArray, NSDictionary;

@interface PIECalendarSlicerParams : NSObject {
    NSMutableDictionary *_holeCountFavorability;
    NSDictionary *_comparativeHoleCountFavorabilityMap;
}

@property (readonly, nonatomic) NSMutableArray *calendarSliceParams;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long duration;
@property (retain, nonatomic) id defaultSliceUserInfo;
@property (retain, nonatomic) NSSet *validHoleCounts;
@property (readonly, nonatomic) NSArray *validHoleCountsSorted;

- (void)dealloc;
- (BOOL)isValid;
- (id)initWithStartDate:(id)a0 duration:(long long)a1;
- (id)comparativeHoleCountFavorabilityMap;
- (void)setFavorability:(double)a0 forHoleCount:(long long)a1;

@end
