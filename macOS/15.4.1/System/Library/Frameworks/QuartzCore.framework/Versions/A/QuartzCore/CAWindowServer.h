@class NSArray;

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray *x0; id x1; unsigned int x2; id /* block */ x3; } *_impl;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) BOOL secure;
@property id /* block */ slotDeletionCallback;

+ (id)context;
+ (id)contextWithOptions:(id)a0;
+ (id)server;
+ (id)serverWithOptions:(id)a0;
+ (id)serverIfRunning;
+ (void)stopServer;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)_init;
- (void)addDisplay:(id)a0;
- (id)displayManager;
- (void)removeDisplay:(id)a0;
- (void)_detectDisplays;
- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (id)displayWithDisplayId:(unsigned int)a0;
- (id)displayWithName:(id)a0;
- (id)displayWithUniqueId:(id)a0;
- (id)insecureProcessIds;
- (BOOL)isSlotValid:(unsigned int)a0;
- (void)removeAllDisplays;
- (id)secureModeViolations;
- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;

@end
