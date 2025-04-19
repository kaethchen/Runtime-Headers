@class NSXPCConnection;
@protocol _NCWidgetPreferencesDelegate;

@interface _NCWidgetPreferences : NSObject {
    NSXPCConnection *_connection;
    BOOL _waitingForReconnect;
}

@property (weak) id<_NCWidgetPreferencesDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_disconnected;
- (void)_setupConnection;
- (void)_connectionAvailable:(id)a0;
- (void)getAllItems:(id /* block */)a0;
- (void)moveWidgetIdentifier:(id)a0 afterWidget:(id)a1;
- (void)setWidgetIdentifier:(id)a0 enabled:(BOOL)a1;
- (void)widgetPrefsStateChanged;

@end
