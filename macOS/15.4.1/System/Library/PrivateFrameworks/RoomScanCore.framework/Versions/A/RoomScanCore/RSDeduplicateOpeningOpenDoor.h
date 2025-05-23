@interface RSDeduplicateOpeningOpenDoor : NSObject {
    struct RSDeduplicateOpeningOpenDoorCore { void /* function */ **_vptr$RSDeduplicateOpeningOpenDoorCore; float _angle_thresh; float _projection_dist_thresh; float _dist_thresh; struct ONLINE_CONFIG { float major_fov_angle_thres; float major_fov_angle_thres_buffer; float dist_thres; float iou_thres; float angle_thres; float angle_thres_for_small_walls; float small_wall_length_thres; float corner_dist_thres; float overlap_angle_thres; float overlap_dist_thres; float overlap_iou_thres; float acute_angle_thres; float shorten_len_thr; float one_vs_two_shorten_len_thr; int shorten_non_match_thr; float iou_thres_opening; int standalone_opening_thr; float hold_score_thres; float hold_small_wall_length_thres; float opening_checking_range; float opening_checking_thres; float opening_checking_occlusion_range; float min_length_thres; float parallel_angle_epsilon; float dup_dist_thr; float dup_angle_thr; float dup_iou_thr; float curved_wall_early_stop_score_thr; float low_conf_wall_score_thr; int low_conf_wall_non_match_thr; } _matching_config; } _rSDeduplicateOpeningOpenDoorCore;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
