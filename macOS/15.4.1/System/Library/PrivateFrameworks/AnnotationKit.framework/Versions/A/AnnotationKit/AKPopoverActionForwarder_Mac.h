@class NSString, NSResponder;

@interface AKPopoverActionForwarder_Mac : NSResponder <NSMenuItemValidation>

@property (retain) NSResponder *firstResponderToUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)insertForwarderInstanceIntoResponderChainOfPopover:(id)a0 usingFirstResponder:(id)a1;

- (void).cxx_destruct;
- (void)delete:(id)a0;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)paste:(id)a0;
- (void)redo:(id)a0;
- (void)selectAll:(id)a0;
- (void)undo:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)deleteMessages:(id)a0;
- (void)duplicate:(id)a0;
- (void)performActionForSender:(id)a0;
- (void)_findTargetAndPerformAction:(SEL)a0 withSender:(id)a1;

@end
