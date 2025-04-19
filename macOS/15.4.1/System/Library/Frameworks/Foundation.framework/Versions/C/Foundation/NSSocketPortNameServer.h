@interface NSSocketPortNameServer : NSPortNameServer

@property unsigned short defaultNameServerPortNumber;

+ (id)sharedInstance;

- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceWillPublish:(id)a0;
- (void)netServiceWillResolve:(id)a0;
- (id)portForName:(id)a0;
- (id)portForName:(id)a0 host:(id)a1;
- (id)portForName:(id)a0 host:(id)a1 nameServerPortNumber:(unsigned short)a2;
- (BOOL)registerPort:(id)a0 name:(id)a1;
- (BOOL)registerPort:(id)a0 name:(id)a1 nameServerPortNumber:(unsigned short)a2;
- (BOOL)removePortForName:(id)a0;

@end
