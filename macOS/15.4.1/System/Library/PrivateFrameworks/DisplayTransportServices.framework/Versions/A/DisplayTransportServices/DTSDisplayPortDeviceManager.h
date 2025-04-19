@class NSArray;
@protocol DTSIOConnect;

@interface DTSDisplayPortDeviceManager : NSObject

@property (class, readonly, copy, nonatomic) NSArray *devices;

@property (readonly, nonatomic) id<DTSIOConnect> muxConnect;

- (void).cxx_destruct;

@end
