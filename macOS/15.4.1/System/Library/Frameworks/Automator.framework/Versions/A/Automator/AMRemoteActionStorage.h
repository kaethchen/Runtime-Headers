@class NSRemoteViewController, NSUUID, AMRemoteActionHostViewController, NSXPCConnection, AMRemoteActionVariableDelegate;
@protocol AMRemoteActionVariableControllerXPCProtocol, AMRemoteActionXPCProtocol, NSXPCProxyCreating;

@interface AMRemoteActionStorage : NSObject

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<AMRemoteActionXPCProtocol, NSXPCProxyCreating> remoteActionProxy;
@property (retain, nonatomic) NSUUID *serviceUUID;
@property (retain, nonatomic) AMRemoteActionHostViewController *hostViewController;
@property (retain, nonatomic) NSUUID *remoteActionUUID;
@property (retain, nonatomic) AMRemoteActionVariableDelegate *variableDelegate;
@property (retain, nonatomic) id<AMRemoteActionVariableControllerXPCProtocol, NSXPCProxyCreating> variableControllerProxy;
@property (retain, nonatomic) NSRemoteViewController *dummyRemoteViewController;

- (void).cxx_destruct;

@end
