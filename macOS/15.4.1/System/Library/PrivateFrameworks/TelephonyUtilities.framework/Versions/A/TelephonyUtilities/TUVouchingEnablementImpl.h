@class FTServerBag, NSUserDefaults;

@interface TUVouchingEnablementImpl : NSObject <TUVouchingEnablement>

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) FTServerBag *serverBag;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL shouldForceVerificationFailures;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 serverBag:(id)a1;
- (BOOL)serverBagValueForKey:(id)a0 withDefault:(BOOL)a1;

@end
