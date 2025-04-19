@class NSString, ADMSystem, ADMLocalUser;

@interface ADMCredential : NSObject

@property (readonly, copy) NSString *password;
@property (readonly) BOOL isDiskUser;
@property (readonly) BOOL isRootUser;
@property (readonly, retain) ADMSystem *system;
@property (readonly, retain) ADMLocalUser *user;

+ (id)credentialForAdminUser:(id)a0 password:(id)a1 error:(id *)a2;
+ (id)credentialForDiskUserOnSystem:(id)a0 withPassword:(id)a1 error:(id *)a2;
+ (id)credentialForRootProcessWithError:(id *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)redactedDescription;
- (id)initWithSystem:(id)a0 userType:(long long)a1 user:(id)a2 password:(id)a3 error:(id *)a4;

@end
