@interface LACUIDevice : NSObject

@property (class, readonly, nonatomic) LACUIDevice *sharedInstance;

@property (readonly, nonatomic) BOOL isDynamicIslandAvailable;

@end
