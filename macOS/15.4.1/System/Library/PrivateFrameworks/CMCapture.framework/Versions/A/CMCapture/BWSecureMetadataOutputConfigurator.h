@class BWSecureMetadataOutputConfiguration;
@protocol BWSecureMetadataOutputConfiguratorDelegate;

@interface BWSecureMetadataOutputConfigurator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BWSecureMetadataOutputConfiguration *_configurationForPrimaryClient;
    BWSecureMetadataOutputConfiguration *_coalescedSecureMetadataOutputConfiguration;
    id<BWSecureMetadataOutputConfiguratorDelegate> _delegate;
}

@property (retain) BWSecureMetadataOutputConfiguration *configurationForPrimaryClient;
@property (readonly) BWSecureMetadataOutputConfiguration *coalescedSecureMetadataOutputConfiguration;
@property (nonatomic) id<BWSecureMetadataOutputConfiguratorDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)_coalescedClientConfiguration;
- (void)_updateSecureMetadataOutputConfigurationForceDelegate:(BOOL)a0;

@end
