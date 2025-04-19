@class NSString, NSXPCConnection;
@protocol PUEditingExtensionUndoTarget;

@interface PUEditingExtensionUndoProxyExtensionSide : NSObject <PUEditingExtensionUndoButtonHost>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<PUEditingExtensionUndoTarget> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)remoteObject;
- (void)performRedo;
- (void)performUndo;
- (void)setShowUndoRedo:(BOOL)a0;
- (void)setUndoEnabled:(BOOL)a0 redoEnabled:(BOOL)a1;

@end
