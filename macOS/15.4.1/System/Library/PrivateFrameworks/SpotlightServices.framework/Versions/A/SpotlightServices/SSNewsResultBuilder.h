@class NSString, NSDate;

@interface SSNewsResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *publishedDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *newsSource;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (id)newsFootnoteWithNewsSource:(id)a0 publishedDate:(id)a1;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildDescriptions;
- (id)buildInlineCardSection;

@end
