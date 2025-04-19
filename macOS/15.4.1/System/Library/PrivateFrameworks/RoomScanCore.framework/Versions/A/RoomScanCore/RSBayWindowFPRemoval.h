@interface RSBayWindowFPRemoval : NSObject {
    float _angle_thr_side;
    float _angle_thr_back;
    float _projection_distance_thr_side;
    float _projection_distance_thr_back;
    float _overlap_thr;
    float _bay_window_depth_thr;
}

- (id)init;

@end
