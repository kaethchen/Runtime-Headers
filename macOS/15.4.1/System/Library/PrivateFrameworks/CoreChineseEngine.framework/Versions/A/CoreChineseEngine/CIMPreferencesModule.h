@class NSString, CIMPreferences;

@interface CIMPreferencesModule : NSPreferencesModule

@property (retain, nonatomic) id notificationObserver;
@property (copy, nonatomic) NSString *inputSourceIdentifier;
@property (copy, nonatomic) id /* block */ updateKeyboardLayoutPreviewBlock;
@property (readonly, nonatomic) CIMPreferences *preferences;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didAddToPreferencePane;

@end
