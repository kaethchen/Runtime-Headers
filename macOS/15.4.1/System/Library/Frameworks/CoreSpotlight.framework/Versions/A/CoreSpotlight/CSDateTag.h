@class NSDate;

@interface CSDateTag : CSNumericAnalysisTag

@property (readonly, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithDate:(id)a0 confidence:(double)a1;

@end
