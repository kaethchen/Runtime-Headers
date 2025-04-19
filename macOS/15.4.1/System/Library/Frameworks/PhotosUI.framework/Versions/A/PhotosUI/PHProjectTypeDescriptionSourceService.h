@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString, PHProjectTypeDescriptionSourceInvalidatorProxy;
@protocol PHProjectTypeDescriptionDataSource, PHProjectTypeDescriptionSourceServiceDelegate;

@interface PHProjectTypeDescriptionSourceService : NSObject <NSXPCListenerDelegate, PHProjectTypeDescriptionSourceXPCService>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<PHProjectTypeDescriptionDataSource> dataSource;
@property (readonly, weak, nonatomic) PHProjectTypeDescriptionSourceInvalidatorProxy *invalidator;
@property (weak, nonatomic) id<PHProjectTypeDescriptionSourceServiceDelegate> delegate;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDataSource:(id)a0 invalidator:(id)a1;
- (void)_handleConnectionInvalidation;
- (void)requestFooterTextForProjectTypeLevel:(id)a0 reply:(id /* block */)a1;
- (void)requestSubtypesForProjectType:(id)a0 reply:(id /* block */)a1;
- (void)requestTypeDescriptionForProjectType:(id)a0 reply:(id /* block */)a1;

@end
