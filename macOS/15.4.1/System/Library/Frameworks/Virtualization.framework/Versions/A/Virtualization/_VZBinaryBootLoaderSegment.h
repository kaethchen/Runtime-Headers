@class NSURL;

@interface _VZBinaryBootLoaderSegment : NSObject <NSCopying>

@property (readonly) NSURL *binaryURL;
@property (readonly) unsigned long long loadAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithBinaryURL:(id)a0 loadAddress:(unsigned long long)a1;

@end
