@class NSString;
@protocol HMDTTRTriggerDataSource, HMMRadarInitiating;

@interface HMDCounterThresholdTTRTrigger : NSObject <HMMCounterObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *displayReason;
@property (readonly, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) NSString *componentName;
@property (readonly, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) long long componentID;
@property (readonly, nonatomic) BOOL primaryOnly;
@property (readonly, weak) id<HMDTTRTriggerDataSource> dataSource;
@property (readonly, weak, nonatomic) id<HMMRadarInitiating> radarInitiator;
@property (readonly, nonatomic) long long activeThreshold;
@property (nonatomic) long long targetThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithThreshold:(long long)a0 displayReason:(id)a1 radarInitiator:(id)a2;
- (id)initWithThreshold:(long long)a0 displayReason:(id)a1 radarTitle:(id)a2 componentName:(id)a3 componentVersion:(id)a4 componentID:(long long)a5 radarInitiator:(id)a6;
- (id)initWithThreshold:(long long)a0 displayReason:(id)a1 radarTitle:(id)a2 componentName:(id)a3 componentVersion:(id)a4 componentID:(long long)a5 radarInitiator:(id)a6 primaryOnly:(BOOL)a7 dataSource:(id)a8;
- (void)updatedCounter:(id)a0 fromOldValue:(long long)a1 toNewValue:(long long)a2;

@end
