@class NSUUID, PACompositionEditController;

@interface PAOperationEditController : NSObject

@property (getter=isEnabled) BOOL enabled;
@property (readonly) NSUUID *operationUUID;
@property (readonly, weak) PACompositionEditController *compositionEditController;

- (BOOL)enabled;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)operation;
- (void)setOperation:(id)a0;
- (void)remove;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)beginInteractiveChange;
- (void)endInteractiveChange;
- (id)initWithCompositionEditController:(id)a0 operationUUID:(id)a1;
- (void)setOperation:(id)a0 changedForKey:(id)a1;

@end
