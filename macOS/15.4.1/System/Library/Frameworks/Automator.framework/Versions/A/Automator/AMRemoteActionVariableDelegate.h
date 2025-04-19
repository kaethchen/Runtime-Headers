@class AMRemoteAction;
@protocol AMVariableControllerProtocol;

@interface AMRemoteActionVariableDelegate : NSObject <AMRemoteActionVariableDelegateXPCProtocol>

@property (weak, nonatomic) AMRemoteAction *_remoteAction;
@property (nonatomic, setter=_setRegisteredForNotifications:) BOOL _registeredForNotifications;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (weak, nonatomic, setter=_setLocalVariableController:) id<AMVariableControllerProtocol> _localVariableController;
@property (weak) id<AMVariableControllerProtocol> localVariableController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (id)_localVariableForXPCVariable:(id)a0;
- (void)_variablesUpdated;
- (id)initWithLocalVariablesController:(id)a0 remoteAction:(id)a1;
- (void)remoteActionAddVariable:(id)a0 newVariableUUID:(id)a1;
- (void)remoteActionEditVariable:(id)a0 clickedPoint:(id)a1 controlFrame:(id)a2 isTokenField:(id)a3;
- (void)remoteActionRenameVariable:(id)a0 name:(id)a1;
- (void)remoteActionUpdateValue:(id)a0 ofVariable:(id)a1;
- (void)variableAddedNotification:(id)a0;
- (void)variableChangedNotification:(id)a0;
- (void)variableRemovedNotification:(id)a0;

@end
