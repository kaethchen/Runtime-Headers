@class NSString;

@interface iCloudWalletService : MMService <MMServicePreflightProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayName;
- (id)icon;
- (BOOL)isDataService;

@end
