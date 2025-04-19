@class NSTouchBar, NSFunctionRow;

@interface NSWorkflowsBar : NSObject {
    NSTouchBar *_touchBar;
    NSFunctionRow *_functionRow;
    BOOL _isVisible;
    BOOL _isEnabled;
}

@property (retain) NSTouchBar *touchBar;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly, getter=isVisible) BOOL visible;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfEnabled;
+ (BOOL)automaticallyNotifiesObserversOfTouchBar;
+ (BOOL)automaticallyNotifiesObserversOfVisible;
+ (id)sharedWorkflowsBar;

- (void)dealloc;
- (id)init;
- (void)_placementVisibilityDidChange;
- (void)_presentationModeConfigurationDidChange;

@end
