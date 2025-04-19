@class NSString;

@interface WK_RTCVideoDecoderVTBVP9 : NSObject <RTCVideoDecoder> {
    struct opaqueCMFormatDescription { } *_videoFormat;
    BOOL _isVideoFullRange;
    struct CGColorSpace { } *_colorSpace;
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    id /* block */ _callback;
    int _error;
    int _width;
    int _height;
    BOOL _shouldCheckFormat;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setError:(int)a0;
- (void)setCallback:(id /* block */)a0;
- (struct CGColorSpace { } *)colorSpace;
- (void)flush;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)configureDecompressionSession;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(long long)a2;
- (void)destroyDecompressionSession;
- (id)implementationName;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (void)setWidth:(unsigned short)a0 height:(unsigned short)a1;
- (long long)startDecodeWithNumberOfCores:(int)a0;

@end
