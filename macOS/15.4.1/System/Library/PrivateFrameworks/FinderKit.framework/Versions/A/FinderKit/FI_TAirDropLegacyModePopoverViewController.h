@class FI_TKeyValueObserverGlue, NSString, NSArray, FI_TButton, NSObject, FI_TTextField, FI_TPopoverController, NSIndexSet, FI_TAirDropDiscoveryController;

@interface FI_TAirDropLegacyModePopoverViewController : FI_TViewController {
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _legacyModeEnabledObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _legacyMachineObserver;
    FI_TPopoverController *_popoverController;
    FI_TTextField *_messageTextField;
    FI_TButton *_toggleLegacyModeButton;
}

@property (readonly) FI_TAirDropDiscoveryController *discoveryController;
@property (readonly, retain, nonatomic) NSString *messageText;
@property (readonly, retain, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) BOOL isButtonEnabled;

+ (id)keyPathsForValuesAffectingIsButtonEnabled;
+ (id)keyPathsForValuesAffectingIsLegacyMachine;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)nibName;
- (void)configureView;
- (void)initCommon;
- (void)setPopoverController:(id)a0;
- (BOOL)isLegacyMachine;
- (void)legacyModeOrMachineChanged;
- (void)toggleAirDropLegacyMode:(id)a0;

@end
