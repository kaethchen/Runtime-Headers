@interface LFSMSession : NSObject

@property int sessionID;

+ (id)defaultOptions;
+ (id)currentSession;
+ (id)sessionForUser:(unsigned int)a0;
+ (id)allSessions;
+ (BOOL)isThisSessionOnConsole;
+ (id)sessionByListener:(id)a0 withOptions:(id)a1;
+ (id)sessionWithCGSessionID:(unsigned int)a0;
+ (id)sessionWithOptions:(id)a0;
+ (id)sessionWithSessionID:(int)a0;
+ (void)signalSessionReady;

- (int)close;
- (id)properties;
- (void)bringOnConsoleWithOptions:(id)a0;
- (id)initWithSessionID:(int)a0;

@end
