@protocol AVAudioRouteDescribing;

@interface AVAudioHardwareDefaultRouteChangeEvent : NSObject

@property (nonatomic) unsigned int routeType;
@property (retain, nonatomic) id<AVAudioRouteDescribing> routeDescription;

- (void).cxx_destruct;

@end
