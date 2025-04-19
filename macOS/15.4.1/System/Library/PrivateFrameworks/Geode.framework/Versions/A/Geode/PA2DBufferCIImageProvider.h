@class PA2DBuffer;

@interface PA2DBufferCIImageProvider : NSObject {
    PA2DBuffer *_buffer;
    BOOL _endAccessOnDealloc;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (id)initWithBuffer:(id)a0 endAccessOnDealloc:(BOOL)a1;

@end
