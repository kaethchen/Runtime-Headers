@class NSString;

@interface MTEnvironmentStoreDelegate : MTEnvironmentDeviceDelegate <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connectionType;
- (id)cookies;
- (id)userAgent;
- (id)_connectionType;
- (id)dsId;
- (id)_activeItunesAccount;
- (id)storeFrontHeader;

@end
