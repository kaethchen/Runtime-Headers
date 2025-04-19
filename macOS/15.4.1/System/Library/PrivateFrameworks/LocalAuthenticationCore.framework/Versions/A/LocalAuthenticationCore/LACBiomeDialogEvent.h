@class NSString, NSArray;

@interface LACBiomeDialogEvent : NSObject

@property (retain, nonatomic) NSString *dialogID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) double timeSinceUpdate;
@property (readonly, nonatomic) NSArray *mechanisms;
@property (readonly, nonatomic) long long successfulMechanism;
@property (readonly, nonatomic) NSArray *failedMechanisms;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) long long failingAction;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addAction:(long long)a0 dismissing:(BOOL)a1;
- (void)determineTimeSinceLastSystemUpdateWithCompletion:(id /* block */)a0;
- (void)failedAuthenticationWithMechanism:(long long)a0;
- (void)startedAuthenticationWithMechanism:(long long)a0;
- (void)succeededAuthenticationWithMechanism:(long long)a0;

@end
