@class NSString, NSArray;

@interface AVAudioHardwareDriver : AVAudioHardwareObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *clocks;
@property (readonly, nonatomic) NSArray *boxes;

- (id)init;

@end
