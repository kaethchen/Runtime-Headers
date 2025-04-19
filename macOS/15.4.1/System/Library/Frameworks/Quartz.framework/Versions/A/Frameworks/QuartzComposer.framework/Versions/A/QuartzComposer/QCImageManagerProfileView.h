@class QCImageManager;

@interface QCImageManagerProfileView : QCProfileView {
    QCImageManager *_manager;
    unsigned long long _virtualScreen;
    BOOL _purgeable;
    void *_unused2[4];
}

- (void)dealloc;
- (void)addSample:(const double *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageManager;
- (void)setImageManager:(id)a0;
- (void)_updateProfile;
- (void)setSampleSize:(unsigned long long)a0;
- (void)setShowPurgeable:(BOOL)a0;
- (void)setVirtualScreen:(unsigned long long)a0;

@end
