@class VKMapSnapshotCreator;

@interface MKMapSnapshotCreator : NSObject {
    VKMapSnapshotCreator *_snapshotCreator;
    BOOL _rendering;
}

+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })axisTransformFrom:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })commonSnapshotRegionForRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectEncloserOfMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 withSizeProportionalToSize:(struct CGSize { double x0; double x1; })a1;
+ (id)snapshotCreatorWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (BOOL)supportsSharingThumbnails;

- (void).cxx_destruct;
- (void)cancel;
- (void)_renderWithCompletionBlock:(id /* block */)a0;
- (void)renderRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 completionBlock:(id /* block */)a1;
- (void)renderRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 options:(id)a1 completionBlock:(id /* block */)a2;

@end
