@class NSString, NSData;

@interface SCMLBinSerializerImageFrame : NSObject

@property (retain) NSString *recordID;
@property (retain) NSData *imageData;

- (id)name;
- (void).cxx_destruct;
- (id)data;
- (id)initWithKey:(id)a0 value:(id)a1;
- (struct CGImage { } *)cgImage;
- (struct __CVBuffer { } *)pixelBuffer;
- (id)ciImage;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(id)a0;

@end
