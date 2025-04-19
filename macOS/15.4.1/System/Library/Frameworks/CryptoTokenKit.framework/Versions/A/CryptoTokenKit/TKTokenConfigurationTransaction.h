@class TKTokenConfigurationConnection;

@interface TKTokenConfigurationTransaction : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)commit;
- (id)initWithConfigurationConnection:(id)a0;

@end
