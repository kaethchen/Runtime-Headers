@class NSString, NSSet;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) int supportedPhyModes;
@property (retain, nonatomic) NSSet *deviceCapabilities;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (BOOL)deviceSupports:(int)a0;
- (unsigned long long)currentNumberOfSpatialStreams;
- (unsigned long long)maxInterfacePHYRate;

@end
