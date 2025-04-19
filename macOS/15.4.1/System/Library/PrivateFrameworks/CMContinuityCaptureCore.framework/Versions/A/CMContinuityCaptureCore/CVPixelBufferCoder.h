@class NSString;

@interface CVPixelBufferCoder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property BOOL transferSourceMedia;
@property (retain) NSString *mediaName;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)_createPixelBufferForImage:(id)a0 fillWidth:(long long)a1 fillHeight:(long long)a2;

@end
