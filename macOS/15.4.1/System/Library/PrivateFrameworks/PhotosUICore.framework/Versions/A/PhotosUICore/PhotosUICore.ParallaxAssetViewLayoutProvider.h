@interface PhotosUICore.ParallaxAssetViewLayoutProvider : NSObject <PIPosterLayoutProvider> {
    void /* unknown type, empty encoding */ overlapTestAreas;
    void /* unknown type, empty encoding */ headroomFractionRange;
    void /* unknown type, empty encoding */ renderContext;
}

- (id)init;
- (void).cxx_destruct;
- (id)generateOrientedLayoutsForFullExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutConfiguration:(id)a1 layoutRegions:(id)a2 segmentationMatteImage:(id)a3 segmentationClassification:(unsigned long long)a4 error:(id *)a5;

@end
