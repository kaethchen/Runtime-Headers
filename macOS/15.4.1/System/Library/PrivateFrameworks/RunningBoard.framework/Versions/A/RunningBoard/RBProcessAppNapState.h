@interface RBProcessAppNapState : NSObject <NSCopying, NSMutableCopying> {
    int _pid;
    struct task_suppression_policy { int active; int lowpri_cpu; int timer_throttle; int disk_throttle; int cpu_limit; int suspend; int throughput_qos; int suppressed_cpu; int background_sockets; int reserved[7]; } _policy;
    unsigned int _taskPort;
}

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL inactive;
@property (readonly, nonatomic) BOOL preventBackgroundSockets;
@property (readonly, nonatomic) BOOL preventDiskThrottle;
@property (readonly, nonatomic) BOOL preventLowPriorityCPU;
@property (readonly, nonatomic) BOOL preventSuppressedCPU;
@property (readonly, nonatomic) unsigned char timerThrottleTier;
@property (readonly, nonatomic) unsigned short encodedState;

+ (id)defaultState;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithProcessAppNapState:(id)a0;
- (void)applyToPID:(int)a0;

@end
