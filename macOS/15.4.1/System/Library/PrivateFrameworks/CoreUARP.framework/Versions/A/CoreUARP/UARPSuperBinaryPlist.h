@class NSMutableDictionary;

@interface UARPSuperBinaryPlist : NSObject {
    NSMutableDictionary *_sbDict;
}

- (void).cxx_destruct;
- (id)initWithPlist:(id)a0;
- (BOOL)writeToURL:(id)a0;
- (BOOL)mergePlist:(id)a0;

@end
