@protocol TUCallServicesClientCapabilitiesActions;

@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<TUCallServicesClientCapabilitiesActions> delegate;
@property (nonatomic) BOOL wantsCallDisconnectionOnInvalidation;
@property (nonatomic) BOOL wantsCallStopStreamingOnInvalidation;
@property (nonatomic) BOOL wantsFrequencyChangeNotifications;
@property (nonatomic) BOOL wantsToScreenCalls;
@property (nonatomic) BOOL wantsCallNotificationsDisabledWhileSuspended;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)save;

@end
