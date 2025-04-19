@class NSString, _NSQuickActionTouchBarService;

@interface _NSQuickActionTouchBarServiceDelegate : NSObject <NSXPCListenerDelegate> {
    _NSQuickActionTouchBarService *_touchBarService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithTouchBarService:(id)a0;

@end
