@class NSXPCListener, NSString;
@protocol SYBacklinkIndicatorServiceDelegate;

@interface SYBacklinkIndicatorService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorProtocol>

@property (class, nonatomic) BOOL _forTesting;

@property (retain, nonatomic) NSXPCListener *listener;
@property (weak, nonatomic) id<SYBacklinkIndicatorServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_listenerEndpoint;
- (oneway void)hideIndicator;
- (oneway void)showIndicatorForBacklinkWithDomainIdentifiers:(id)a0 linkIdentifiers:(id)a1 displayID:(unsigned int)a2 corner:(long long)a3 action:(long long)a4;

@end
