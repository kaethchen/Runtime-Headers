@class NSString;

@interface SSSearchInAppResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) int searchInAppType;

+ (id)buildResultWithAppName:(id)a0 appBundleId:(id)a1 searchString:(id)a2 searchInAppType:(int)a3;

- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)initWithAppName:(id)a0 appBundleId:(id)a1 searchString:(id)a2 searchInAppType:(int)a3;

@end
