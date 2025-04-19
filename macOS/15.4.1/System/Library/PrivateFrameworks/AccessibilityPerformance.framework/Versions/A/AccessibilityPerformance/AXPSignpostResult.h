@class NSArray, NSDictionary;

@interface AXPSignpostResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timebaseRatio;
@property (copy, nonatomic) NSArray *eventResults;
@property (readonly, copy, nonatomic) NSArray *validResults;
@property (readonly, copy, nonatomic) NSArray *misusedResults;
@property (readonly, copy, nonatomic) NSDictionary *eventSummaries;

+ (id)manyEventSummariesToCSV:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_eventSummaryToCSV:(id)a0;
- (void)_handleSummaryForEventResult:(id)a0 eventSummaries:(id)a1;
- (void)_handleSummaryForIntervalResult:(id)a0 eventSummaries:(id)a1 beginIntervals:(id)a2;
- (id)eventSummariesToCSV;
- (BOOL)writeEventSummariesToFile:(id)a0;

@end
