@class VCWeakObjectHolder;

@interface AVCPreviewCALayerHost : CALayerHost {
    VCWeakObjectHolder *_preview;
}

- (void)dealloc;
- (void)layoutSublayers;
- (id)initWithPreview:(id)a0;

@end
