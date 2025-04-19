@class NSTextInputContext, WBSBlockCoalescer;
@protocol FavoritesPickerVisibilityController, FavoritesPickerVisibilityManagerDataSource;

@interface FavoritesPickerVisibilityManager : NSObject {
    BOOL _observingKeyboardInputSourceOverlayVisibility;
    NSTextInputContext *_textInputContextBeingObserved;
    WBSBlockCoalescer *_visibilityUpdateCoalescer;
}

@property (weak, nonatomic) id<FavoritesPickerVisibilityController> pickerVisibilityController;
@property (weak, nonatomic) id<FavoritesPickerVisibilityManagerDataSource> dataSource;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)unregisterFromNotificationsForUnifiedFieldCompletionController:(id)a0;
- (void)_dismissFavoritesPicker:(id)a0;
- (BOOL)_isInputMethodsBarVisible;
- (void)_observeKeyboardInputSourceOverlayVisibilityIfNeeded;
- (void)_scheduleFavoritesPickerToBeDismissed;
- (void)_scheduleFavoritesPickerToBeShown;
- (void)_showFavoritesPickerFromFavoritesBeingInstalledNotification:(id)a0;
- (void)_showStartPageFromUnifiedFieldNotification:(id)a0;
- (void)_stopObservingKeyboardInputSourceOverlayVisibility;
- (void)backgroundLoadControllerDidCommitBackgroundLoad;
- (void)browserViewControllerDidFirstMeaningfulPaint:(id)a0;
- (void)registerForNotificationsForUnifiedFieldCompletionController:(id)a0;
- (void)registerForWindowNotifications;
- (void)startObservingKeyboardMethodsBarVisibility;
- (void)stopObservingKeyboardMethodsBarVisibility;
- (void)unregisterFromWindowNotifications;

@end
