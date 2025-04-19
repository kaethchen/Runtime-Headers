@class NSSet, NSXPCInterface;

@interface FSKitConstants : NSObject

@property (class, readonly, retain) NSXPCInterface *FSModuleExtensionXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSModuleExtensionHostXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSClientXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSAllClientXPCProtocols;
@property (class, readonly, retain) NSXPCInterface *FSClientHostXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSTaskMessageOperations;
@property (class, readonly, retain) NSXPCInterface *FSTaskOperations;
@property (class, readonly, retain) NSXPCInterface *FSKitHelperProtocol;
@property (class, readonly, retain) NSXPCInterface *FSTaskProgressXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSVolumeXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSAgentXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSAgentHostXPCProtocol;
@property (class, readonly, retain) NSSet *errorTypes;
@property (class, readonly, retain) NSSet *plistTypes;
@property (class, readonly, retain) NSSet *plistAndValueTypes;
@property (class, readonly, retain) NSSet *extensionItemTypes;

+ (id)errorTypes;
+ (id)extensionItemTypes;
+ (id)plistAndValueTypes;
+ (id)plistTypes;
+ (void)setArgumentsForFSClientXPC:(id)a0;

@end
