@class NSMutableArray;

@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMutableArray *_dateRanges;
@property (readonly, nonatomic) long long count;

+ (id)dateRangeSet;
+ (id)dateRangeSetWithDateRange:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dateRanges;
- (id)initWithDateRange:(id)a0;

@end
