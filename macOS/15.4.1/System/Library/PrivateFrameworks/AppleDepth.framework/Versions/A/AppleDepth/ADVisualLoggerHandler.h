@class NSString;

@interface ADVisualLoggerHandler : ADLogManagerHandler {
    BOOL _synchronousFileLogging;
    NSString *_loggerName;
    struct VZLogger { } *_visualLogger;
    struct VZDestination { } *_fileDestination;
    struct VZDestination { } *_networkDestination;
}

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (long long)setHostName:(id)a0;
- (void)logCalibration:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logDictionary:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logMatrix4x3:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logPointCloud:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 timestamp:(double)a3;
- (void)logString:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)postDisable;
- (void)preEnable;
- (long long)removeFileSettings;
- (long long)removeHostSettings;
- (long long)setLogFolder:(id)a0;

@end
