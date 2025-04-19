@class NSURL;
@protocol MTLLibrary;

@interface MTLDynamicLibraryDescriptorSPI : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLLibrary> library;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long options;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
