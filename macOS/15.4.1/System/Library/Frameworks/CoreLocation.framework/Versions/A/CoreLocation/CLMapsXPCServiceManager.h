@class NSTimer, NSXPCConnection;

@interface CLMapsXPCServiceManager : NSObject {
    NSTimer *fInactivityTimer;
    double fTimerUpdateMachContTime;
}

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearMemoryAndExitHelperProcessCleanly;
- (void)collectMapDataOfType:(long long)a0 aroundCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 inRadius:(double)a2 allowNetwork:(BOOL)a3 isPedestrianOrCycling:(BOOL)a4 clearTiles:(BOOL)a5 callSynchronously:(BOOL)a6 WithReply:(id /* block */)a7;
- (void)createConnection;
- (void)onTimerFire:(id)a0;
- (void)releaseMapHelperServiceOSTransaction;
- (void)updateTimer;

@end
