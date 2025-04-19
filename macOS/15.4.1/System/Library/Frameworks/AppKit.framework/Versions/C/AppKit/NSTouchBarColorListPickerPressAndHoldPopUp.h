@class NSString, NSView, NSScrubber, NSColorList, NSColor;
@protocol NSTouchBarColorListPickerPressAndHoldPopUpDelegate, NSTouchBarColorListPickerContainerView;

@interface NSTouchBarColorListPickerPressAndHoldPopUp : NSObject <NSScrubberDataSource, NSScrubberDelegate, NSTouchBarPressAndHoldTransposerDelegate> {
    NSScrubber *_scrubber;
    NSView<NSTouchBarColorListPickerContainerView> *_containerView;
    BOOL _presenting;
    BOOL _didBeginScrubberInteraction;
}

@property (retain) NSColorList *colorList;
@property long long numberOfLighterColors;
@property long long numberOfDarkerColors;
@property (copy) NSColor *selectedColor;
@property id<NSTouchBarColorListPickerPressAndHoldPopUpDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)dismiss;
- (void)_transposerDidEnd:(id)a0 cancelled:(BOOL)a1;
- (void)didBeginInteractingWithScrubber:(id)a0;
- (void)didCancelInteractingWithScrubber:(id)a0;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didHighlightItemAtIndex:(long long)a1;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (void)showFromView:(id)a0 inContainer:(id)a1;
- (void)transposerDidCancel:(id)a0;
- (void)transposerDidEnd:(id)a0;

@end
