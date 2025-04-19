@class NSView, NSString;

@interface _NSViewActionForwardingLayerDelegate : NSObject <CABackdropLayerDelegate, CALayerDelegate>

@property (readonly, weak, nonatomic) NSView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
