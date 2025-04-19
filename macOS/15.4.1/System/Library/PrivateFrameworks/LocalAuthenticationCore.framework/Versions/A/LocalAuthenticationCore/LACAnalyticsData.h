@class LACBiomeDialogEvent, LACAnalyticsSession;

@interface LACAnalyticsData : NSObject

@property (readonly, nonatomic) LACBiomeDialogEvent *biomeDialogEvent;
@property (weak, nonatomic) LACAnalyticsSession *session;

- (id)init;
- (void).cxx_destruct;
- (void)authenticationResult:(long long)a0 event:(long long)a1;
- (void)authenticationStartedForEvent:(long long)a0;
- (void)authenticationAction:(long long)a0 dismissing:(BOOL)a1;

@end
