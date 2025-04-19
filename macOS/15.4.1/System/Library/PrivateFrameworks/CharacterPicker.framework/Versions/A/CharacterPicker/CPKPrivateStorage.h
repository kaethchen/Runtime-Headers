@class NSView, EMFEmojiLocaleData, EMFEmojiPreferences, CPKWindow, NSDictionary, CPKPopoverController, CPKDataProvider, NSWindow;
@protocol CPKCharacterEntity;

@interface CPKPrivateStorage : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRect;
@property (weak, nonatomic) NSView *positioningView;
@property (nonatomic) unsigned long long preferredEdge;
@property (retain, nonatomic) id globalEventMonitor;
@property (retain, nonatomic) id localEventMonitor;
@property (nonatomic) BOOL needsRebuildView;
@property (nonatomic) BOOL settingDataSource;
@property (nonatomic) BOOL displayingPopover;
@property (nonatomic) BOOL skipOpeningAnimation;
@property (nonatomic) BOOL displayAsWindow;
@property (nonatomic) BOOL showingLargeWindow;
@property (nonatomic) BOOL lastTargetValidation;
@property (nonatomic) long long detachedWindowLevel;
@property (nonatomic) BOOL showEmojiOnly;
@property (nonatomic) struct CGPoint { double x; double y; } displayAsWindowLoc;
@property (weak, nonatomic) NSWindow *alternateLargeWindow;
@property (weak, nonatomic) NSWindow *lastKeyWindow;
@property (weak, nonatomic) id lastActionObject;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastSelectionOnTarget;
@property (retain, nonatomic) NSDictionary *selectionAttributeForTextView;
@property (retain, nonatomic) id<CPKCharacterEntity> lastSelectedEntity;
@property (retain, nonatomic) CPKWindow *detachingWindow;
@property (retain, nonatomic) CPKWindow *detachedWindow;
@property (retain, nonatomic) CPKPopoverController *tempRetainer;
@property (retain, nonatomic) CPKDataProvider *delayedSettingProvider;
@property (retain, nonatomic) EMFEmojiPreferences *emojiPreference;
@property (retain, nonatomic) EMFEmojiLocaleData *emojiLocaleData;

- (void).cxx_destruct;

@end
