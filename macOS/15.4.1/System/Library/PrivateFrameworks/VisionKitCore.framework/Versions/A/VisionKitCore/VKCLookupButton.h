@class NSString;
@protocol VKCLookupButtonDelegate;

@interface VKCLookupButton : VKCTappableView <NSAccessibilityButton>

@property (weak, nonatomic) id<VKCLookupButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)resetCursorRects;

@end
