@interface WorkflowEditor.SummaryModal : NSObject <NSPopoverDelegate> {
    void /* unknown type, empty encoding */ isPopoverInCompactWidth;
    void /* unknown type, empty encoding */ dismissBehavior;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ onEditingChange;
    void /* unknown type, empty encoding */ popover;
}

- (id)init;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)a0;

@end
