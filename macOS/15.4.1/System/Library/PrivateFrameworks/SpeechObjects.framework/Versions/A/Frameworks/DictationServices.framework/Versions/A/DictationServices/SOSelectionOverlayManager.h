@class NSString, NSWindowController, VCUIBadgedTextOverlayController, NSWindow;

@interface SOSelectionOverlayManager : NSObject <NSPopoverDelegate>

@property NSWindow *textSelectionWindow;
@property NSWindowController *textSelectionWindowController;
@property VCUIBadgedTextOverlayController *correctionsViewController;
@property NSString *selectedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)textSegmentsForSelectedString:(id)a0 startIndex:(long long)a1;

@end
