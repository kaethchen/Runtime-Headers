@class NSString, NSURL;

@interface PTAssetFSDNetworkInputReader : NSObject <PTAssetComponentReader> {
    NSURL *_url;
    int _frameIndex;
    struct __CVBuffer { } *_refBuffer;
    struct __CVBuffer { } *_auxBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)globals;
- (BOOL)_readRGBABufferFromFile:(id)a0 to:(struct __CVBuffer { } *)a1;
- (id)copyNextFrame;

@end
