@interface APDeviceLockedTask : NSObject

@property (readonly, nonatomic) id /* block */ taskHandler;

+ (BOOL)deviceUnlockedSinceBoot;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;

@end
