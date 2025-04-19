@class NSArray;

@interface MADMovieCurationResult : MADResult

@property (readonly, nonatomic) NSArray *curationScoreEntries;
@property (readonly, nonatomic) NSArray *highlightEntries;
@property (readonly, nonatomic) NSArray *summaryEntries;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithSummaryEntries:(id)a0 highlightEntries:(id)a1 curationScoreEntries:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSummaryEntries:(id)a0 highlightEntries:(id)a1 curationScoreEntries:(id)a2;

@end
