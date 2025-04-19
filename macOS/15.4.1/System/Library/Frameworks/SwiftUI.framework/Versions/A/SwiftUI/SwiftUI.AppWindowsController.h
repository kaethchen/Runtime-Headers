@interface SwiftUI.AppWindowsController : NSObject <NSWindowRestoration> {
    void /* unknown type, empty encoding */ makeWindow;
    void /* unknown type, empty encoding */ mainWindowControllers;
    void /* unknown type, empty encoding */ dismissedWindowControllers;
    void /* unknown type, empty encoding */ windowCounts;
    void /* unknown type, empty encoding */ cascadeNumbers;
    void /* unknown type, empty encoding */ auxiliaryWindowControllers;
    void /* unknown type, empty encoding */ auxiliaryCascadeNumber;
    void /* unknown type, empty encoding */ settingsWindowController;
    void /* unknown type, empty encoding */ singleWindowControllers;
    void /* unknown type, empty encoding */ stageWindowController;
    void /* unknown type, empty encoding */ restorationCompletionHandlers;
    void /* unknown type, empty encoding */ keyWindowObservation;
    void /* unknown type, empty encoding */ mainWindowObservation;
    void /* unknown type, empty encoding */ windowFocusedValues;
    void /* unknown type, empty encoding */ windowFocusStores;
}

+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;

@end
