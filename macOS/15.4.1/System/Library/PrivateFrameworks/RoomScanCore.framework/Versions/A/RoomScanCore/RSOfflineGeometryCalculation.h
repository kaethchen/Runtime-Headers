@class RSGeometryMeta;

@interface RSOfflineGeometryCalculation : NSObject {
    RSGeometryMeta *_geoMeta;
    struct { int margin; int img_sz; BOOL use_pw_center; int pw_center_update_rate; BOOL use_global_center; BOOL use_dynamic_pixel_sz; float pixel_sz; BOOL hist_norm; int z_slice; float z_slice_pixel; } _initParam;
}

- (id)init;
- (void).cxx_destruct;

@end
