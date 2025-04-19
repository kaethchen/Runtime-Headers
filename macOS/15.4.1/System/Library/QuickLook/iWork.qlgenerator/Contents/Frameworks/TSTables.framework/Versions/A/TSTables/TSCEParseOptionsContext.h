@class TSCEError;

@interface TSCEParseOptionsContext : NSObject

@property (retain, nonatomic) TSCEError *error;
@property (nonatomic) BOOL isChartFormula;
@property (nonatomic) BOOL isSageUpgrade;
@property (nonatomic) BOOL isArrayMode;
@property (nonatomic) BOOL needsSageImportRewrite;

- (id)init;
- (void).cxx_destruct;

@end
