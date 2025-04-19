@class NSArray;

@interface AVBTimeErrorSequence : NSObject

@property (readonly, copy, nonatomic) NSArray *timeErrors;

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long *)a0 timeError:(long long *)a1 count:(long long)a2;

- (void).cxx_destruct;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0 withFilename:(id)a1;
- (id)generatePythonScriptWithOutputPath:(id)a0 fileName:(id)a1 titleName:(id)a2 plotPath:(id)a3 showPlot:(BOOL)a4;
- (id)initWithTimeErrors:(id)a0;
- (id)timeErrorSequenceByApplyingFilter:(id)a0;
- (id)timeErrorSequenceByApplyingFilterBidirectionally:(id)a0;
- (BOOL)writeAnalysisToDirectoryURL:(id)a0 withTitle:(id)a1 csvFilename:(id)a2 plotFilename:(id)a3 scriptFilename:(id)a4;

@end
