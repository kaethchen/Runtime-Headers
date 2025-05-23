@class NSString;

@interface ConfigurationProviderDarwinNotifier : NSObject <TUConfigurationProviderNotifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postConfigurationChanged;

@end
