@interface KHFramePanZoomInfoStoreController : NSObject

+ (id)_currentPhotoInfoPanZoomInfoStringForFrame:(id)a0;
+ (void)_getPanAndZoomFromAttributeString:(id)a0 photoID:(id *)a1 zoom:(double *)a2 pan:(struct { double x0; double x1; BOOL x2; BOOL x3; } *)a3;
+ (void)_removeExistingPanZoomInfoForFrame:(id)a0 inInfo:(id)a1;
+ (BOOL)retrievePanAndZoomInfoForFrame:(id)a0 photoID:(id)a1 zoom:(double *)a2 pan:(struct { double x0; double x1; BOOL x2; BOOL x3; } *)a3;
+ (void)storeCurrentPhotoInfoForFrame:(id)a0;

@end
