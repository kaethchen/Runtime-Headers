@class NSString;

@interface IKScannerSelfTest : NSObject

@property (copy) NSString *path;
@property (copy) NSString *fileFormat;
@property long long bitDepth;
@property unsigned long long pixelDataType;
@property BOOL rotate;
@property BOOL colorCorrect;
@property BOOL didScan;

- (void)dealloc;
- (id)initWithFormat:(id)a0 bitDepth:(long long)a1 pixelDataType:(unsigned long long)a2 rotate:(BOOL)a3 colorCorrect:(BOOL)a4 path:(id)a5;
- (id)documentName;

@end
