@class NSXPCListener, NSString, NSXPCConnection, SSRVTUITrainingMessageHandler, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVTUITrainingListener : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *activeConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SSRVTUITrainingMessageHandler *messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
