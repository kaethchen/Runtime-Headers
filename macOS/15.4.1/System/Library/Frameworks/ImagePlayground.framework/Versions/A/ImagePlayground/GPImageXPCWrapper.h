@interface GPImageXPCWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ surface;
    void /* unknown type, empty encoding */ image;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ pixelBuffer;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1;

@end
