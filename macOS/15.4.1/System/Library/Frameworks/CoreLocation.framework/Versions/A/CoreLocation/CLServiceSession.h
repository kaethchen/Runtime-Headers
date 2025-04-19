@class CLFullAccuracySession, NSString, CLServiceSessionInternal;

@interface CLServiceSession : NSObject {
    id /* block */ _clientCallback;
    CLServiceSessionInternal *_serviceSessionInternal;
    CLFullAccuracySession *_fullAccuracySession;
    unsigned long long _serviceSessionDiagnosticMask;
    unsigned long long _fullAccuracySessionDiagnosticMask;
    unsigned long long _aggregatedDiagnosticMask;
    long long _authorizationRequirement;
    NSString *_fullAccuracyPurposeKey;
}

+ (id)disconnectedSessionRequiringAuthorization:(long long)a0;
+ (id)disconnectedSessionRequiringAuthorization:(long long)a0 fullAccuracyPurposeKey:(id)a1;
+ (id)sessionRequiringAuthorization:(long long)a0;
+ (id)sessionRequiringAuthorization:(long long)a0 fullAccuracyPurposeKey:(id)a1;
+ (id)sessionRequiringAuthorization:(long long)a0 fullAccuracyPurposeKey:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
+ (id)sessionRequiringAuthorization:(long long)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (id)sessionWithLocationManager:(id)a0 authorizationRequirement:(long long)a1 fullAccuracyPurposeKey:(id)a2 queue:(id)a3 handler:(id /* block */)a4;

- (void)dealloc;
- (void)invalidate;
- (void)setHandler:(id /* block */)a0;
- (void)handleDiagnosticUpdate;
- (id)initDisconnectedSessionWithAuthorizationRequirement:(long long)a0 fullAccuracyPurposeKey:(id)a1;
- (id)initWithLocationManager:(id)a0 authorizationRequirement:(long long)a1 fullAccuracyPurposeKey:(id)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)setupSessionInternalWithLocationManager:(id)a0 authorizationRequirement:(long long)a1 fullAccuracyPurposeKey:(id)a2 queue:(id)a3;

@end
