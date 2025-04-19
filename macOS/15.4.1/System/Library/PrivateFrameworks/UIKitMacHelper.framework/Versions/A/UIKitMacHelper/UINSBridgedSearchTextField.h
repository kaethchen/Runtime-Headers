@class NSString, UISearchTextField;

@interface UINSBridgedSearchTextField : UINSSceneHostingView <_NSBridgedSearchField, UINSBridgedSearchTextField>

@property (getter=isEnabled) BOOL enabled;
@property (setter=_setFocusRingAnimationType:) long long _focusRingAnimationType;
@property (readonly) NSString *stringValue;
@property unsigned long long controlSize;
@property (readonly, nonatomic) UISearchTextField *searchTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (unsigned long long)focusRingType;
- (BOOL)isCurrentlyEditing;
- (BOOL)mouseDownCanMoveWindow;
- (void)selectText:(id)a0;
- (id)initWithUIView:(id)a0;
- (id)initWithUISearchTextField:(id)a0;

@end
