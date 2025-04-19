@class NSString;

@interface MMCalendarsService : MMService <MMServiceDataclassActionPerforming, MMServicePreflightProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayName;
- (id)icon;
- (void)_presentMergeDialogWithWindow:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isDataService;
- (void)performDataclassActionsForService:(id)a0 willEnable:(BOOL)a1 shouldCreate:(BOOL)a2 withWindow:(id)a3 completionHandler:(id /* block */)a4;

@end
