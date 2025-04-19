@class STYWakeDetectorDebugInfo;

@interface STYWakeEvent : NSObject

@property (nonatomic) unsigned long long wakeType;
@property (nonatomic) unsigned long long sleepType;
@property (nonatomic) unsigned long long endType;
@property (nonatomic) unsigned long long wakeStart;
@property (nonatomic) unsigned long long kernelStart;
@property (nonatomic) unsigned long long graphicsReady;
@property (nonatomic) unsigned long long loginWindowWakeEnd;
@property (readonly) unsigned long long wakeEnd;
@property (retain, nonatomic) STYWakeDetectorDebugInfo *debugInfo;

- (id)description;
- (void).cxx_destruct;

@end
