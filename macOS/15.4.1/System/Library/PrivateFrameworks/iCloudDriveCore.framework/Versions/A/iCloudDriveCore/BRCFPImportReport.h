@class NSError, FPImportProgressReport;

@interface BRCFPImportReport : NSObject

@property (copy, nonatomic) NSError *importError;
@property (retain, nonatomic) FPImportProgressReport *fpReport;

- (id)init;
- (void).cxx_destruct;

@end
