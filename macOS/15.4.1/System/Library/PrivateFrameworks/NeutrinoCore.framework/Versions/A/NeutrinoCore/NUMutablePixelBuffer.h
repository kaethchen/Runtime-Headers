@class NUPixelFormat, NSString, NUBufferStorage;
@protocol NUMutableBuffer;

@interface NUMutablePixelBuffer : NSObject <NUMutableBuffer, NSCopying, NSMutableCopying> {
    NUBufferStorage *_storage;
    id<NUMutableBuffer> _buffer;
}

@property (readonly, nonatomic) void *mutableBytes;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) const void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (const void *)bytesAtPoint:(struct { long long x0; long long x1; })a0;
- (void *)mutableBytesAtPoint:(struct { long long x0; long long x1; })a0;
- (id)newRenderDestination;
- (id)privateInit;

@end
