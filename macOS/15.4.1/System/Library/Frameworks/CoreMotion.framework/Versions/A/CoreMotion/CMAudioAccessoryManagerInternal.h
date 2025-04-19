@class NSOperationQueue;

@interface CMAudioAccessoryManagerInternal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSampleLock;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryAccelerometerDispatcher;
    double fAudioAccessoryAccelerometerUpdateInterval;
    id /* block */ fAudioAccessoryAccelerometerHandler;
    NSOperationQueue *fAudioAccessoryAccelerometerQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } acceleration; unsigned long long sensorTime; unsigned short sequenceNumber; } fLatestAudioAccessoryAccelerometerSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryGyroDispatcher;
    double fAudioAccessoryGyroUpdateInterval;
    id /* block */ fAudioAccessoryGyroHandler;
    NSOperationQueue *fAudioAccessoryGyroQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } gyro; unsigned long long sensorTime; unsigned short sequenceNumber; float temperature; } fLatestAudioAccessoryGyroSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryMagnetometerDispatcher;
    double fAudioAccessoryMagnetometerUpdateInterval;
    id /* block */ fAudioAccessoryMagnetometerHandler;
    NSOperationQueue *fAudioAccessoryMagnetometerQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } magneticField; unsigned long long sensorTime; unsigned short sequenceNumber; float temperature; } fLatestAudioAccessoryMagnetometerSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionConfigDispatcher;
    double fAudioAccessoryDeviceMotionUpdateInterval;
    id /* block */ fAudioAccessoryDeviceMotionHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionQueue;
    struct CMOQuaternion { float elements[4]; } fFrameRotation;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionStatusDispatcher;
    id /* block */ fAudioAccessoryDeviceMotionStatusHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionStatusQueue;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct __compressed_pair<CLMotionNotifier::Dispatcher *, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__value_; } __ptr_; } fAudioAccessoryActivityDispatcher;
    double fAudioAccessoryActivityUpdateInterval;
    id /* block */ fAudioAccessoryActivityHandler;
    NSOperationQueue *fAudioAccessoryActivityQueue;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryHeartRateDispatcher;
    double fAudioAccessoryHeartRateUpdateInterval;
    id /* block */ fAudioAccessoryHeartRateHandler;
    NSOperationQueue *fAudioAccessoryHeartRateQueue;
    struct Sample { double timestamp; unsigned int heartRate; float confidence; unsigned long long sensorTime; unsigned int sequenceNumber; } fLatestAudioAccessoryHeartRateSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryPPGDispatcher;
    id /* block */ fAudioAccessoryPPGHandler;
    NSOperationQueue *fAudioAccessoryPPGQueue;
    struct Sample { double timestamp; unsigned long long sensorTime; unsigned char frameNum; unsigned char error; unsigned char dark0[3]; unsigned char light0[3]; unsigned char dark1[3]; unsigned char dark2[3]; unsigned char light1[3]; unsigned char dark3[3]; unsigned char rxGain[2]; unsigned char ledCurrent[2]; } fLatestAudioAccessoryPPGSample;
    BOOL fAudioAccessoryAccelerometerAvailable;
    BOOL fAudioAccessoryGyroAvailable;
    BOOL fAudioAccessoryMagnetometerAvailable;
    BOOL fAudioAccessoryDeviceMotionAvailable;
    BOOL fAudioAccessoryActivityAvailable;
    BOOL fAudioAccessoryHeartRateAvailable;
    BOOL fAudioAccessoryPPGAvailable;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
