@class NSString, NSDate;

@interface CPAnalyticsBiomeBaseSample : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *subset;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andDate:(id)a1 forSubset:(id)a2;

@end
