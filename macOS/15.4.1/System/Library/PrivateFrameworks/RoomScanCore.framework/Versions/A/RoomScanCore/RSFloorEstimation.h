@class NSUUID;

@interface RSFloorEstimation : NSObject {
    struct OBBDetector { struct optional<float __attribute__((ext_vector_type(2)))> { union { char __null_state_; void /* unknown type, empty encoding */ __val_; } ; BOOL __engaged_; } _prev_main_vec; } _obb_detector;
    struct PerimeterDetector { } _perimeter_detector;
    struct optional<float __attribute__((ext_vector_type(2)))> { union { char __null_state_; void /* unknown type, empty encoding */ __val_; } ; BOOL __engaged_; } _initial_cam_xy;
    NSUUID *_uuid;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
