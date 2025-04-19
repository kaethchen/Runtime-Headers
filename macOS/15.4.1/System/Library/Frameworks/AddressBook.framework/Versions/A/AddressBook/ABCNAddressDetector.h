@class ABCNDDScanner;

@interface ABCNAddressDetector : NSObject {
    ABCNDDScanner *_scanner;
}

+ (id)detector;

- (id)init;
- (void).cxx_destruct;
- (id)firstAddressInString:(id)a0;

@end
