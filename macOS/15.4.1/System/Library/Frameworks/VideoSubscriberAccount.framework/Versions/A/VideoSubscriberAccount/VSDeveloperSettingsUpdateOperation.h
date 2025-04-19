@class VSDeveloperServiceConnection, VSOptional, VSDeveloperSettings;

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;
@property (copy, nonatomic) VSDeveloperSettings *settings;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)executionDidBegin;

@end
