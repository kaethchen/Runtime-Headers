@class NSData, GESSAlgIsometricParameterizeOptions;

@interface GESSAlgIsometricParameterizeExtended : GESSAlgBase {
    GESSAlgIsometricParameterizeOptions *_options;
    NSData *_faceIntensityData;
    struct ParameterizeReport { struct duration<double, std::ratio<1>> { double __rep_; } chart_time; struct duration<double, std::ratio<1>> { double __rep_; } initial_param_time; struct duration<double, std::ratio<1>> { double __rep_; } split_param_time; struct duration<double, std::ratio<1>> { double __rep_; } chart_merge_time; struct duration<double, std::ratio<1>> { double __rep_; } fix_self_intersect_time; unsigned long long chart_number; struct duration<double, std::ratio<1>> { double __rep_; } pack_time; unsigned long long pack_img_number; float max_stretch_ratio; float avg_stretch_ratio; float self_intersect_ratio; int param_status; BOOL needs_report; } _report;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setOptions:(id)a0;
- (BOOL)run:(id)a0;
- (id)returnReport;
- (BOOL)setFaceIntensity:(float *)a0 size:(unsigned long long)a1;

@end
