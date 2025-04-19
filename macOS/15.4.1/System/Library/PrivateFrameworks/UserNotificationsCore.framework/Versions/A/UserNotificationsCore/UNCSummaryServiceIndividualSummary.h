@class NSString, NSAttributedString, NSDate;

@interface UNCSummaryServiceIndividualSummary : NSObject

@property (copy, nonatomic) NSString *spotlightIdentifier;
@property (copy, nonatomic) NSAttributedString *individualSummary;
@property (nonatomic) BOOL isHighlight;
@property (copy, nonatomic) NSDate *contentCreationDate;

- (void).cxx_destruct;
- (id)initWithSpotlightIdentifier:(id)a0 individualSummary:(id)a1 isHighlight:(BOOL)a2 contentCreationDate:(id)a3;

@end
