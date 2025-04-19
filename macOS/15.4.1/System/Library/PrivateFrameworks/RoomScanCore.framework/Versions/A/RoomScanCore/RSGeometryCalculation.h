@class RSGeometryMeta;

@interface RSGeometryCalculation : NSObject {
    RSGeometryMeta *_geoMeta;
    struct { int margin; int img_sz; BOOL use_dynamic_img_sz; int img_sz0; int img_sz_step; BOOL use_pw_center; int pw_center_update_rate; BOOL use_global_center; BOOL use_dynamic_pixel_sz; float pixel_sz; BOOL hist_norm; int z_slice; float z_slice_pixel; } _initParam;
    int _output_count;
    int _img_sz_step;
}

- (id)init;
- (void).cxx_destruct;

@end
