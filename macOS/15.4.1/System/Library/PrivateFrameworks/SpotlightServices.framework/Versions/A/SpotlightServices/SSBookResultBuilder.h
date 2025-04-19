@class NSString, NSDate;

@interface SSBookResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSDate *date;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCompactCardSection;

@end
