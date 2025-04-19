@class NSString;

@interface iCloudSettingsSyncService : MMService <MMServicePreflightProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (BOOL)hasPreflightAction;
- (BOOL)isDataService;

@end
