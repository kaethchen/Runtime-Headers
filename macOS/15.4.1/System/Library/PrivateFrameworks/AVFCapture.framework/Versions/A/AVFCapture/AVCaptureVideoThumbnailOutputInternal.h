@class NSArray, AVWeakReference;

@interface AVCaptureVideoThumbnailOutputInternal : NSObject {
    AVWeakReference *weakReference;
    AVWeakReference *delegateWeakReference;
    BOOL didPropagateContents;
    NSArray *filters;
    NSArray *smartStyles;
    struct CGSize { double width; double height; } thumbnailSize;
}

- (void)dealloc;
- (id)init;

@end
