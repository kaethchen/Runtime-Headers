@class NSArray, QCImageManager;

@interface QCImageManagerAgeProfileView : QCAgeProfileView {
    unsigned long long _binCount;
    unsigned long long _statCount;
    unsigned long long _selectedIndex;
    NSArray *_names;
    double *_buffer;
    double _maxAge;
    double _maxAgePurgeable;
    double _binSize;
    double _stdDev;
    double _querySuccess;
    QCImageManager *_manager;
    void *_unused2[4];
}

- (void)dealloc;
- (void)finalize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageManager;
- (void)setImageManager:(id)a0;
- (void)clearAllSamples;
- (void)_updateProfile;
- (unsigned long long)nameCount;
- (id)nameForIndex:(unsigned long long)a0;
- (id)selectedCache;
- (void)setSelectedCache:(id)a0;

@end
