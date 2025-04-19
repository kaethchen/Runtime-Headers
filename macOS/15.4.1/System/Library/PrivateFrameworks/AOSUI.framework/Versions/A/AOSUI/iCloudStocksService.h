@class NSString;

@interface iCloudStocksService : MMService <MMServicePreflightProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (BOOL)isDataService;

@end
