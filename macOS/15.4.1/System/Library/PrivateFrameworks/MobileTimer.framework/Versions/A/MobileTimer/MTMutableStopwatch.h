@class NSString, NSArray, NSDate;

@interface MTMutableStopwatch : MTStopwatch

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double offset;
@property (nonatomic) double currentInterval;
@property (nonatomic) double previousLapsTotalInterval;
@property (copy, nonatomic) NSArray *laps;
@property (nonatomic) long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
