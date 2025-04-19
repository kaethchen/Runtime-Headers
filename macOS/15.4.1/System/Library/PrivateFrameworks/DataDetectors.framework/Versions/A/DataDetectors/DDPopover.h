@class NSString, DDActionContext;

@interface DDPopover : NSPopover <NSPopoverDelegate, DDActionViewPresenter> {
    DDActionContext *_ddcontext;
    BOOL _opened;
    BOOL _detaching;
}

@property (readonly) unsigned long long ddEdge;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ddRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)popoverDidDetach:(id)a0;
- (BOOL)popoverShouldClose:(id)a0;
- (BOOL)popoverShouldDetach:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (void)presentationEndedForController:(id)a0;
- (id)initDDContext:(id)a0;
- (void)presentRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (void)setAltPresentationBehavior:(BOOL)a0;

@end
