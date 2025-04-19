@class DDScannerResult;
@protocol PKDataDetectorItemDelegate;

@interface PKDataDetectorItem : PKDetectionItem

@property (weak, nonatomic) id<PKDataDetectorItemDelegate> delegate;
@property (readonly, nonatomic) DDScannerResult *scannerResult;
@property (readonly, nonatomic) struct __DDResult { } *coreResult;

+ (id)dataDetectorItemWithQueryItem:(id)a0 sessionManager:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)strokeColor;
- (id)drawing;
- (id)_baselinePath;

@end
