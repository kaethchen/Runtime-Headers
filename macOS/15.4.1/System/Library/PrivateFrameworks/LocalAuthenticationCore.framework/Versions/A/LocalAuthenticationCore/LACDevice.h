@interface LACDevice : NSObject

@property (class, readonly, nonatomic) LACDevice *sharedInstance;

@property (readonly, nonatomic) BOOL isClarityBoardRunning;
@property (readonly, nonatomic) BOOL isDynamicIslandAvailable;
@property (readonly, nonatomic) BOOL usesFrontBoardServicesForRemoteUI;

@end
