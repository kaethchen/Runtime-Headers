@interface SGExtractionScannerWrapper : NSObject {
    struct __DDScanner { } *_ddScanner;
}

- (void)dealloc;
- (id)init;

@end
