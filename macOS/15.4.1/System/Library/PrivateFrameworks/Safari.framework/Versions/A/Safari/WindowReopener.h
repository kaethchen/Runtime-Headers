@class NSTimer;

@interface WindowReopener : NSObject {
    NSTimer *saveWindowsTimer;
}

+ (void)reopenWindows;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)windowWillClose:(id)a0;
- (void)saveWindows;
- (void)_reallySaveWindows;
- (id)arrayOfWindowControllerNamesToReopenAtLaunch;
- (void)reopenWithArrayOfWindowControllerNames:(id)a0;

@end
