@class NSArray, IMKSimulatorInputModeSelectorFloatingPanel;

@interface IMKSimulatorInputModeSelector : NSObject {
    IMKSimulatorInputModeSelectorFloatingPanel *_floatingPanel;
}

@property (retain, nonatomic) NSArray *inputModeURLs;
@property (readonly, copy, nonatomic) NSArray *inputModeLabels;

+ (id)sharedInputModeSelector;

- (void)dealloc;
- (id)init;
- (void)selectInputModeUsingLabel:(id)a0;

@end
