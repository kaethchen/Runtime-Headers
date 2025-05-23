@class NSString, TKTokenConfigurationConnection;

@interface TKTokenConfigurationConnectionProxy : NSObject <TKTokenConfigurationChangeProtocol> {
    TKTokenConfigurationConnection *_weakConfigurationConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)tokenConfigurationChanged:(id)a0;

@end
