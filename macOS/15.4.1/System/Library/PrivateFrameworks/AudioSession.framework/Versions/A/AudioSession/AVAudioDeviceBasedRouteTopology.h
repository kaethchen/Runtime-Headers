@class NSArray, NSString;

@interface AVAudioDeviceBasedRouteTopology : NSObject <AVAudioRouteDescribing>

@property (readonly, nonatomic, getter=isStacked) BOOL stacked;
@property (readonly, nonatomic) NSArray *subDeviceUIDs;
@property (readonly, nonatomic) NSString *masterDeviceUID;
@property (readonly, nonatomic) NSString *masterClockUID;
@property (readonly, copy, nonatomic) NSString *UID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeDefaultRoute:(unsigned int)a0;

@end
