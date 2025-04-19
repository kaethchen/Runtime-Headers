@class NSString, NSData, LAContext;

@interface BYAuthenticationContext : NSObject

@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSData *inLocalAuthenticationContext;
@property (retain) NSString *volumeGroupUUID;
@property BOOL interactive;
@property (retain) LAContext *context;
@property BOOL successfullyEvaluated;

- (void).cxx_destruct;
- (id)_recoveryUserGUIDForUsername:(id)a0 volume:(id)a1;
- (unsigned int)_uidForUsername:(id)a0;
- (id)evaluateWithError:(id *)a0;
- (id)initWithUsername:(id)a0 password:(id)a1 localAuthenticationContext:(id)a2 volumeGroupUUID:(id)a3 interactive:(BOOL)a4;

@end
