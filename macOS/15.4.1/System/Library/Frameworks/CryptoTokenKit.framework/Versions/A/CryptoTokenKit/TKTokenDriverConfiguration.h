@class NSDictionary, NSString, TKTokenConfigurationConnection;

@interface TKTokenDriverConfiguration : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
}

@property (class, readonly, nonatomic) NSDictionary *driverConfigurations;

@property (readonly, nonatomic) NSString *classID;
@property (readonly, copy, nonatomic) NSDictionary *tokenConfigurations;

+ (id)driverConfigurationsWithClient:(id)a0;
+ (id)_connectionWithCTKDConnection:(id)a0;
+ (id)_driverConfigurationsWithConnection:(id)a0;
+ (id)driverConfigurationsWithCTKDConnection:(id)a0;

- (void).cxx_destruct;
- (id)beginTransaction;
- (id)addTokenConfigurationForTokenInstanceID:(id)a0;
- (id)createTokenConfigurationWithInstanceID:(id)a0 persistent:(BOOL)a1;
- (id)initWithClassID:(id)a0 configurationConnection:(id)a1;
- (void)removeTokenConfigurationForTokenInstanceID:(id)a0;

@end
