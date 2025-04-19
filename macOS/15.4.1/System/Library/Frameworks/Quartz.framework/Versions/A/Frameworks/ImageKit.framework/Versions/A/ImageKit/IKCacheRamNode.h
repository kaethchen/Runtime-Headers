@class NSString, NSBitmapImageRep, IKCacheNode, NSData;

@interface IKCacheRamNode : IKLinkedListLink <IKImageProxy> {
    IKCacheNode *_parent;
    unsigned int _cacheUsedByBitmapRep;
    unsigned int _cacheUsedByJpegData;
    unsigned int _session;
    int _rawDataFormat;
    BOOL _isInPriorityList;
    NSBitmapImageRep *_bitmapRep;
    NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)data;
- (void)setData:(id)a0;
- (id)parent;
- (unsigned int)session;
- (void)setSession:(unsigned int)a0;
- (void)setParent:(id)a0;
- (void)willDie;
- (int)proxyDataFormat;
- (id)bitmap;
- (unsigned int)cacheUsedByBitmapRep;
- (unsigned int)cacheUsedByJpegData;
- (BOOL)isInPriorityList;
- (BOOL)isVectorial;
- (id)proxyData;
- (id)proxyImage;
- (id)proxyReferenceInstance;
- (struct CGSize { double x0; double x1; })proxySize;
- (int)rawDataFormat;
- (void)setBitmap:(id)a0;
- (void)setCacheUsedByBitmapRep:(unsigned int)a0;
- (void)setCacheUsedByJpegData:(unsigned int)a0;
- (void)setIsInPriorityList:(BOOL)a0;
- (void)setRawDataFormat:(int)a0;
- (BOOL)supportConcurrentLoading;
- (id)thumbnailWithSize:(double)a0 antialiased:(BOOL)a1 quality:(int)a2;
- (unsigned int)totalCacheUsed;

@end
