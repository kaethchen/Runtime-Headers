@class CHDataDetectorQueryItem, DDScannerResult;

@interface PKDataDetectorQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHDataDetectorQueryItem *coreHandwritingDataDetectorQueryItem;
@property (readonly, nonatomic) DDScannerResult *scannerResult;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingDataDetectorQueryItem:(id)a0;

@end
