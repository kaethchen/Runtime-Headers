@class CHSChronoServicesConnection;

@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (id)_transformResults:(id)a0;
- (void)allConfiguredWidgetsWithCompletion:(id /* block */)a0;

@end
