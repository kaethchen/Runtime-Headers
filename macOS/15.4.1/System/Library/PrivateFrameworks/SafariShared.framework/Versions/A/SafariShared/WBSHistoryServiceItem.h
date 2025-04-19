@class NSData, NSString;

@interface WBSHistoryServiceItem : WBSHistoryServiceObject

@property (nonatomic) long long visitCount;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long visitCountScore;
@property (nonatomic) BOOL shouldRecomputeDerivedVisitCountScores;
@property (copy, nonatomic) NSData *dailyVisitCounts;
@property (copy, nonatomic) NSData *weeklyVisitCounts;
@property (readonly, nonatomic) NSString *url;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0;
- (id)initWithSQLRow:(id)a0;

@end
