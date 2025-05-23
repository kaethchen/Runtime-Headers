@class NSString, NSMutableArray, NSSet;

@interface ADLogManager : NSObject {
    int _activeHandlersCounter;
    NSMutableArray *_handlers;
    NSString *_logFolder;
    NSString *_hostName;
    NSSet *_enabledLoggerOverrideSet;
    BOOL _forceAllPriorities;
}

@property (nonatomic) unsigned long long loggingPriority;
@property (nonatomic) BOOL humanReadableFormat;
@property (readonly, nonatomic) BOOL enabled;

+ (id)defaultLoggerWithName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)addHandler:(id)a0;
- (long long)setHostName:(id)a0;
- (void)enable:(id)a0;
- (void)disable:(id)a0;
- (void)applyConfigurationToNewHandler:(id)a0;
- (void)disableAll;
- (void)disableFileLogging;
- (void)disableVisualLogging;
- (void)enableAll;
- (void)enableFileLogging;
- (void)enableVisualLogging;
- (BOOL)getHumanReadableFormat;
- (id)initWithHandlers:(id)a0;
- (void)logCalibration:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logCalibration:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logCalibration:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logDictionary:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logDictionary:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logDictionary:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logMatrix4x3:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logMatrix4x3:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logMatrix4x3:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logPointCloud:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logPointCloud:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logPointCloud:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 priority:(unsigned long long)a3;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 priority:(unsigned long long)a3 timestamp:(double)a4;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 timestamp:(double)a3;
- (void)logString:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logString:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logString:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)processConfigurationChange:(id)a0;
- (long long)setLogFolder:(id)a0;
- (void)toggleByClass:(Class)a0 enable:(BOOL)a1;
- (void)toggleHandler:(id)a0 enable:(BOOL)a1;
- (id)visualLoggerPrefices;

@end
