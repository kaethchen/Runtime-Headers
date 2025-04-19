@class NSString, ANSTPixelBufferDescriptor;

@interface ANSTPixelBuffer : NSObject <ANSTPixelBufferAccessing, ANSTPixelBufferMutableAccessing> {
    ANSTPixelBufferDescriptor *_pixelBufferDescriptor;
    struct __CVBuffer { } *_pixelBuffer;
    unsigned int _orientation;
}

@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *pixelBufferDescriptor;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

@end
