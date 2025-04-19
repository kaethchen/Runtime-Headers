@class NSSet;
@protocol PXActionPerformerDelegate;

@interface PXActionManager : NSObject

@property (weak, nonatomic) id<PXActionPerformerDelegate> performerDelegate;
@property (copy, nonatomic) NSSet *allowedActionTypes;

+ (id /* block */)_unlockDeviceHandlerWithActionType;
+ (void)setEnsureUnlockedDeviceHandlerWithActionType:(id /* block */)a0;

- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)isActionTypeAllowed:(id)a0;
- (BOOL)supportsActionType:(id)a0;
- (id)contextMenuElementsWithHandler:(id /* block */)a0;
- (id)actionItemForActionType:(id)a0 handler:(id /* block */)a1;
- (id)actionItemsForActionTypes:(id)a0 handler:(id /* block */)a1;
- (id)actionPerformerForActionType:(id)a0 parameters:(id)a1;
- (id)actionTypeForGenericType:(id)a0;
- (BOOL)isDestructiveActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (long long)menuActionStateForActionType:(id)a0;
- (id)systemImageNameForActionType:(id)a0;

@end
