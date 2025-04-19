@class NSArray, NSDictionary, NSURL, NSString;

@interface VFXKeyedUnarchiver : NSKeyedUnarchiver

@property (retain, nonatomic) NSArray *allTargetsFromAnimCodec;
@property (retain, nonatomic) NSURL *documentURL;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSString *lookUpKey;
@property (retain, nonatomic) id lookUpFoundInstance;
@property (readonly, nonatomic) NSURL *documentEnclosingURL;

- (void)dealloc;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (id)initForReadingWithData:(id)a0 secure:(BOOL)a1;

@end
