@class NSMutableArray, NSXPCConnection;

@interface IASUnifiedProgressConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableArray *callers;

+ (id)sharedConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_fireReleaseTimer:(id)a0;
- (void)_startReleaseTimer;
- (id)connectionForCaller:(id)a0;
- (BOOL)hasConnectionForCaller:(id)a0;
- (void)releaseConnectionForCaller:(id)a0;

@end
