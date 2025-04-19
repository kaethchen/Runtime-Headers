@class CHSControlService;

@interface CHSControlConfigurationReader : NSObject {
    CHSControlService *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (id)_transformResults:(id)a0;
- (void)allConfiguredControlsWithCompletion:(id /* block */)a0;

@end
