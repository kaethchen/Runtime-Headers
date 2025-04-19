@class NSString, NSAttributedString;

@interface UNCSummaryServiceGroupSummary : NSObject

@property (copy, nonatomic) NSString *spotlightIdentifier;
@property (copy, nonatomic) NSAttributedString *threadSummary;

- (void).cxx_destruct;
- (id)initWithSpotlightIdentifier:(id)a0 threadSummary:(id)a1;

@end
