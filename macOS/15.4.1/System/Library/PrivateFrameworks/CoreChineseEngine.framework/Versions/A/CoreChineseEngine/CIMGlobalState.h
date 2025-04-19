@class NSString, IMKServer, CIMInputController, CIMPreferences;

@interface CIMGlobalState : NSObject

@property (nonatomic) unsigned int IOConnection;
@property (retain, nonatomic) IMKServer *server;
@property (copy, nonatomic) NSString *inputSourceIdentifier;
@property (nonatomic) unsigned long long inlineState;
@property (readonly, nonatomic) id currentClient;
@property (readonly, nonatomic) CIMInputController *currentController;
@property (readonly, nonatomic) BOOL capsLockIsOn;
@property (retain, nonatomic) CIMInputController *mockInputController;
@property (retain, nonatomic) id mockClient;
@property (retain, nonatomic) CIMPreferences *mockPreferences;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
