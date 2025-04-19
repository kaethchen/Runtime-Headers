@class NSArray;

@interface AVAudioHardwareConfigurationChangeEvent : NSObject

@property (retain, nonatomic) NSArray *createdObjects;
@property (retain, nonatomic) NSArray *destroyedObjects;
@property (retain, nonatomic) NSArray *changedObjects;

- (id)init;
- (void).cxx_destruct;

@end
