@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage

@property (nonatomic) BOOL isCurrentDate;
@property (retain, nonatomic) NSDate *date;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithCurrentDateAndVariant:(unsigned long long)a0;
- (id)initWithDate:(id)a0 variant:(unsigned long long)a1;

@end
