@class NSString;
@protocol AXVViewMouseEventDelegate;

@interface AXVView : NSView <AXEEventTapListener>

@property (nonatomic) BOOL _isMouseInBounds;
@property (weak, nonatomic) id<AXVViewMouseEventDelegate> mouseEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
