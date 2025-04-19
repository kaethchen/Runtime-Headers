@class NSArray, ICScannerFunctionalUnit;

@interface ICScannerFeatureTemplateProps : NSObject

@property (nonatomic) int numberOfTargets;
@property (retain, nonatomic) NSArray *targets;
@property (weak, nonatomic) ICScannerFunctionalUnit *fu;

- (void).cxx_destruct;

@end
