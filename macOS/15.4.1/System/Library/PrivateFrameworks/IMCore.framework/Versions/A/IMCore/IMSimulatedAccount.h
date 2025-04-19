@class IMHandle;

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle;

- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)supportsRegistration;
- (BOOL)isOperational;
- (id)loginIMHandle;

@end
