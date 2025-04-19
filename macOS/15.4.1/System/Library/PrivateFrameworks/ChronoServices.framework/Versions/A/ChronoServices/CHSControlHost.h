@class NSString;

@interface CHSControlHost : NSObject {
    void /* unknown type, empty encoding */ _serverConnection;
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ _loggingIdentifier;
    void /* unknown type, empty encoding */ _activationState;
    void /* unknown type, empty encoding */ _invalid;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)initWithIdentifier:(id)a0;
- (void)deactivate;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;

@end
