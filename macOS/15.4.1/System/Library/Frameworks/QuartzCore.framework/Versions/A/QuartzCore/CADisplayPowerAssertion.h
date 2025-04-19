@class NSString;

@interface CADisplayPowerAssertion : NSObject {
    unsigned int _display_id;
    long long _reason;
    NSString *_identifier;
    unsigned int _server_port;
    unsigned int _client_port;
    BOOL _active;
    BOOL _invalidated;
}

@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)cancel;
- (void)acquire;
- (void)_acquireAndWait:(BOOL)a0;
- (void)_ensureValid;
- (id)_initWithDisplayId:(unsigned int)a0 reason:(long long)a1 identifier:(id)a2;
- (void)acquireAndWaitForPowerOn;
- (void)initializeClientPort;

@end
