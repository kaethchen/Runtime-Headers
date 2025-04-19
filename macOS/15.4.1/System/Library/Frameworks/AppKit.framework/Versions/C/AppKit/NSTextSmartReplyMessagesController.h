@class NSString;

@interface NSTextSmartReplyMessagesController : NSObject <NSTextSmartReplyAppController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)correctionPanelIgnoredEventMask;
- (BOOL)shouldCloseForTextInputContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAdjustedSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void)isInputEmptyForContext:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)shouldDebounceEventOfType:(unsigned long long)a0;
- (BOOL)shouldProcessTextInputContext:(id)a0 forEvent:(id)a1 isNewFocus:(BOOL)a2;
- (BOOL)shouldRequestLongForm;

@end
