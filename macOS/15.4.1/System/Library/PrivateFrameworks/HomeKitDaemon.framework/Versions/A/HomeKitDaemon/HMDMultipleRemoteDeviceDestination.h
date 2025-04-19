@class NSArray;

@interface HMDMultipleRemoteDeviceDestination : HMDRemoteMessageDestination

@property (copy) NSArray *devices;

- (id)init;
- (void).cxx_destruct;
- (id)allRemoteDestinationStrings;
- (id)initWithTarget:(id)a0 devices:(id)a1;
- (id)remoteDestinationString;
- (id)remoteDestinationStringForDevice:(id)a0;

@end
