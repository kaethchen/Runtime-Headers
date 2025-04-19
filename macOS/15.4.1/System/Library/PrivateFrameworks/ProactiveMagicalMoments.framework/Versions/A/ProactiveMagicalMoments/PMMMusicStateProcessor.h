@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_handlePause;
- (void)_handlePlay;
- (void)_initNowPlayingPause;
- (void)_initNowPlayingPlay;
- (void)_initStarkConnect;
- (void)_initStarkDisconnect;
- (void)_persist;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)lastPlayedWithHandler:(id /* block */)a0;

@end
