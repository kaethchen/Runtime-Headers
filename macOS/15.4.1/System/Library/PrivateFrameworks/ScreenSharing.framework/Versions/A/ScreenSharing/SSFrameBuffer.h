@class NSArray, SSScreenConfiguration, SSScreenInfo, NSMutableArray, NSData;

@interface SSFrameBuffer : NSObject {
    struct SSSize { unsigned long long width; unsigned long long height; } mSize;
    double mPerceivedSessionScalingFactor;
    unsigned long long mBitsPerComponent;
    unsigned long long mBitsPerPixel;
    unsigned long long mBytesPerPixel;
    unsigned long long mBytesPerRow;
    BOOL mShouldInterpolate;
    BOOL mHasCursor;
    NSData *mBuffer;
    unsigned int mBitmapInfo;
    struct CGColorSpace { } *mColorSpace;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mInUseMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } mInUseCondition;
    unsigned long long mInUseCount;
    NSMutableArray *mObservers;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mObserversMutex;
    double mContentsScale;
    NSArray *mScreensToDraw;
}

@property (retain) NSMutableArray *lingeringOldBuffers;
@property (copy) SSScreenConfiguration *screenConfiguration;
@property (copy) SSScreenInfo *selectedScreen;
@property (readonly) NSArray *screensToDraw;
@property (readonly) BOOL showingMultipleDisplays;
@property (readonly) BOOL needsCoordinateTranslations;
@property (readonly) double contentsScale;
@property double perceivedScalingFactor;

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;
- (void)removeObserver:(id)a0;
- (struct SSSize { unsigned long long x0; unsigned long long x1; })size;
- (struct CGImage { } *)newCGImage;
- (void)exclusiveUnlock;
- (void)addObserver:(id)a0 onThread:(id)a1;
- (struct CGImage { } *)copyImage:(struct CGImage { } *)a0;
- (const void *)exclusiveLock;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForScreenAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUnscaledScreenAtIndex:(unsigned long long)a0;
- (BOOL)getDestinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forScreen:(id)a1 withSourceRect:(struct SSRect { struct SSPoint { long long x0; long long x1; } x0; struct SSSize { unsigned long long x0; unsigned long long x1; } x1; })a2 checkIntersection:(BOOL)a3;
- (BOOL)getSourceRect:(struct SSRect { struct SSPoint { long long x0; long long x1; } x0; struct SSSize { unsigned long long x0; unsigned long long x1; } x1; } *)a0 forScreen:(id)a1 withDestinationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)hasCursor;
- (double)localScalingForScreen:(id)a0;
- (struct CGImage { } *)newCGImageFromRect:(struct SSRect { struct SSPoint { long long x0; long long x1; } x0; struct SSSize { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)noteRectangleChange:(struct SSRect { struct SSPoint { long long x0; long long x1; } x0; struct SSSize { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)notifyObserversSizeWillChange:(id)a0;
- (void)rectChangedOnThread:(id)a0;
- (int)setFormatWithSize:(struct SSSize { unsigned long long x0; unsigned long long x1; })a0 screenConfiguration:(id)a1 selectedScreen:(id)a2 localScalingFactor:(double)a3 contentsScale:(double)a4 withBitsPerComponent:(unsigned long long)a5 withBitsPerPixel:(unsigned long long)a6 withBytesPerRow:(unsigned long long)a7 withBitmapInfo:(unsigned int)a8 shouldInterpolate:(BOOL)a9 hasCursor:(BOOL)a10 withConnection:(void *)a11;
- (void)sizeChangedOnThread:(id)a0;
- (void)sizeWillChangeOnThread:(id)a0;

@end
