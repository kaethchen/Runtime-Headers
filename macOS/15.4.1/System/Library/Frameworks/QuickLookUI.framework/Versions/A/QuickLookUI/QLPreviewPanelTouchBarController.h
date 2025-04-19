@class NSString, NSTouchBarItem, NSTouchBar, NSGroupTouchBarItem;
@protocol QLPreviewTouchBarDelegate;

@interface QLPreviewPanelTouchBarController : NSObject <NSTouchBarProvider, NSTouchBarDelegate>

@property (retain) NSTouchBarItem *openItem;
@property (retain) NSTouchBarItem *shareItem;
@property (retain) NSTouchBarItem *markupItem;
@property (retain) NSTouchBarItem *rotateLeftItem;
@property (retain) NSTouchBarItem *rotateRightItem;
@property (retain) NSTouchBarItem *trimItem;
@property (retain) NSTouchBarItem *closeItem;
@property (retain) NSTouchBarItem *revertItem;
@property (retain) NSTouchBarItem *doneItem;
@property (retain) NSTouchBarItem *prevNextItem;
@property (retain) NSTouchBarItem *indexItem;
@property (retain) NSGroupTouchBarItem *contentItem;
@property (retain, nonatomic) NSTouchBar *touchBar;
@property (weak) id<QLPreviewTouchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)makeTouchBar;
- (void)updateTouchBar;
- (void)closeButtonPressed:(id)a0;
- (id)_touchBarIdentifiers;
- (void)_validateTouchBar;
- (void)prevNextSegmentPushed:(id)a0;
- (void)toggleIndexSheet:(id)a0;

@end
