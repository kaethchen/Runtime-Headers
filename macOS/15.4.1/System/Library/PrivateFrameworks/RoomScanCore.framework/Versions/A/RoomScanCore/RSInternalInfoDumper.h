@class NSString, NSMutableDictionary, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, RSFrame;

@interface RSInternalInfoDumper : NSObject {
    NSObject<OS_dispatch_queue> *_save_queue;
    NSObject<OS_dispatch_group> *_save_group;
    NSString *_loggingDirectory;
    NSMutableArray *_keyframesDebug;
    NSMutableArray *_floorPlanDebug;
    NSMutableArray *_coachingDebug;
    NSMutableArray *_driftDebug;
    NSMutableArray *_sysDebug;
    double _firstARFrameTime;
    NSDate *_lastKeyframeTime;
    NSMutableDictionary *_keyframeMeta;
    double _maxKeyframeFPS;
    id<RSFrame> _lastARFrame;
    struct { void /* unknown type, empty encoding */ columns[4]; } _lastCameraPose;
    BOOL _enableARFrameDump;
    BOOL _enableLiveDump;
    BOOL _enableARFrameRGB;
    BOOL _enableARFrameDepth;
}

- (id)init;
- (void).cxx_destruct;

@end
