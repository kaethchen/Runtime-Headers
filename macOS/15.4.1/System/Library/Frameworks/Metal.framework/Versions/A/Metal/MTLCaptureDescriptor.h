@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id captureObject;
@property (nonatomic) long long destination;
@property (copy, nonatomic) NSURL *outputURL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
