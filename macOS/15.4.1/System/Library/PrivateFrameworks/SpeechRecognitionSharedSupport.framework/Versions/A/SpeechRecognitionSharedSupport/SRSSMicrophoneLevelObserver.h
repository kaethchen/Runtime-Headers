@class NSString;

@interface SRSSMicrophoneLevelObserver : NSObject <SOMicrophoneViewMeterLevelConsumer>

@property (copy, nonatomic) id /* block */ meterLevelCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateLinearMeterLevel:(float)a0;

@end
