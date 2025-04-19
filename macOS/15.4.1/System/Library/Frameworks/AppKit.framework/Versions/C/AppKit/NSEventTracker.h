@class NSEvent;

@interface NSEventTracker : NSObject

@property (retain) NSEvent *currentEvent;
@property unsigned long long deviceID;
@property unsigned long long phase;
@property unsigned long long modifierFlags;
@property BOOL wantsEventCoalescing;
@property BOOL wantsPeriodicCallbacks;
@property BOOL wantsKeyboardEvents;

- (void)dealloc;
- (void)trackEvent:(id)a0 usingHandler:(id /* block */)a1;

@end
