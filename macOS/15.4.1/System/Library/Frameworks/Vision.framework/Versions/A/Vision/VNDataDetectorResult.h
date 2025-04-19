@class NSString, DDScannerResult, VNObservation;

@interface VNDataDetectorResult : NSObject

@property (retain, nonatomic) DDScannerResult *scannerResult;
@property (retain, nonatomic) NSString *shortDescription;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) VNObservation *originalObservation;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0 observation:(id)a1;

@end
