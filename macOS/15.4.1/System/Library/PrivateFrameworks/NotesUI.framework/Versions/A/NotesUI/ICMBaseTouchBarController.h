@class NSTouchBar, NSMutableSet, NSString;

@interface ICMBaseTouchBarController : NSObject <NSTouchBarProvider>

@property (retain, nonatomic) NSMutableSet *enabledBindingObjectSet;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)buttonWithImage:(id)a0 target:(id)a1 action:(SEL)a2;
- (id)buttonWithTitle:(id)a0 image:(id)a1 target:(id)a2 action:(SEL)a3;
- (id)buttonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)addEnabledBindingWithObject:(id)a0 toObject:(id)a1 keyPath:(id)a2;

@end
