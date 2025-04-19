@interface BWStereoVideoCaptureSceneMonitor : NSObject {
    BOOL _oneShotFocusScanInProgress;
    BOOL _sceneTooDarkMonitoringEnabled;
    BOOL _subjectTooCloseMonitoringEnabled;
    BOOL _sceneIsTooDark;
    BOOL _subjectIsTooClose;
    double _wideMinimumValidFocusDistance;
    float _normalizedSNRThreshold;
    int _luxLevelThreshold;
    double _focusDistanceThreshold;
    double _lastWideFocusDistance;
    double _lastSuperWideFocusDistance;
}

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParametersByPortType:(id)a0 attachDebugFrameStatistics:(BOOL)a1;
- (BOOL)resolveStereoVideoCaptureStatusWithFrameStatistics:(id)a0 sceneFlags:(unsigned long long)a1 stereoVideoCaptureStatusOut:(int *)a2;
- (void)setAutoFocusInProgress:(BOOL)a0 focusLocked:(BOOL)a1 oneShotFocusScanInProgress:(BOOL)a2;

@end
