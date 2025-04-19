@class NSString;

@interface IFDataDigest : NSObject {
    unsigned long long _ccHandle;
    NSString *_digestString;
    NSString *_type;
}

+ (id)supportedTypes;
+ (id)digestAlgorithmToString:(unsigned int)a0;
+ (id)digestOfBuffer:(char *)a0 withLength:(unsigned int)a1 andType:(id)a2;
+ (id)digestOfData:(id)a0 andType:(id)a1;
+ (id)digestOfDataInFD:(int)a0 atLocation:(long long)a1 withLength:(unsigned long long)a2 andType:(id)a3;
+ (unsigned int)stringToDigestAlgorithm:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)type;
- (id)initWithType:(id)a0;
- (id)digestString;
- (id)initWithType:(id)a0 digest:(id)a1;
- (BOOL)updateFromBuffer:(char *)a0 withLength:(unsigned int)a1;
- (BOOL)updateFromNSData:(id)a0;

@end
