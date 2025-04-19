@class BSServiceConnection;

@interface FUAccessibilityService : NSObject <FUAccessibilityServiceServerToClientInterface> {
    BSServiceConnection *_connection;
}

+ (id)identifier;
+ (id)interface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_target;
- (void)enableApplicationAccessibilityWithCompletion:(id /* block */)a0;

@end
