@interface FileProviderDaemon.FPShouldPauseResult : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldPause;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ semaphore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithShouldPause:(BOOL)a0 semaphore:(id)a1;

@end
