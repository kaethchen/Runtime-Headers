@class LFListener, NSMutableDictionary, LFConnection;

@interface LFNotify : NSObject

@property LFConnection *connection;
@property LFListener *listener;
@property (retain) NSMutableDictionary *tokenMap;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)_nameForSelector:(SEL)a0 inProtocol:(id)a1;
- (void)_registerProtocolMethods;
- (id)initWithListener:(id)a0;
- (void)sendSelector:(SEL)a0;

@end
