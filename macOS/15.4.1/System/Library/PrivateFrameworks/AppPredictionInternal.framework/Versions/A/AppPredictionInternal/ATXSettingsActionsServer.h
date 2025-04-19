@class NSString, NSXPCListener;

@interface ATXSettingsActionsServer : NSObject <NSXPCListenerDelegate, ATXSettingsActionsInterface> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)recentActionsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestedActionsWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_dummyDayZeroSettingsActionsForDeduping;
- (id)_suggestedActionsWithDayZeroBackfillForDeduping:(id)a0;
- (id)_suggestedActionsWithRequest:(id)a0;

@end
