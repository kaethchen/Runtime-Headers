@class NSDatePicker, NSBezierPath, _NSDatePickerOverlayPanel, NSVisualEffectView, NSDate;
@protocol _NSDatePickerCalendarOverlayDelegate;

@interface _NSDatePickerCalendarOverlay : NSObject <_NSDatePickerOverlayPanelDelegate>

@property (retain) NSVisualEffectView *_visualEffectView;
@property (retain) NSDatePicker *_textDatePicker;
@property (retain) NSDatePicker *_calendarDatePicker;
@property (weak) NSDatePicker *_sourceDatePicker;
@property (retain) _NSDatePickerOverlayPanel *_overlayPanel;
@property (retain) NSBezierPath *_maskPath;
@property (weak) id<_NSDatePickerCalendarOverlayDelegate> _delegate;
@property (retain, setter=_setDateValue:) NSDate *_dateValue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)_arrangePickersForRTL:(BOOL)a0 presentingUpward:(BOOL)a1;
- (void)_configureWithSourceDatePicker:(id)a0 sourceWindow:(id)a1;
- (unsigned long long)_datePickerElements;
- (void)_datePickerPanelShouldClose:(id)a0;
- (BOOL)_eventLocationIsContainedInMask:(id)a0;
- (id)_maskPathForRTL:(BOOL)a0 presentingUpward:(BOOL)a1;
- (void)_positionOverlayPanelOverSourceDatePicker;
- (void)_positionOverlayWithSourceSubfieldsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isRTL:(BOOL)a1;
- (void)_selectNextKeyViewHidingPanel:(id)a0;
- (void)_selectPreviousKeyViewHidingPanel:(id)a0;
- (int)_selectedSubfieldElement;
- (void)_setDatePickerElements:(unsigned long long)a0;
- (void)_setSelectedSubfieldElement:(int)a0;
- (void)_setUpPanelWithSourceWindow:(id)a0;
- (void)_showOverlayWithSourceSubfieldsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementFlags:(unsigned long long)a1 locale:(id)a2 calendar:(id)a3 timeZone:(id)a4 font:(id)a5 sourceWindow:(id)a6;
- (void)_showOverlayWithSourceSubfieldsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementFlags:(unsigned long long)a1 locale:(id)a2 calendar:(id)a3 timeZone:(id)a4 font:(id)a5 sourceWindow:(id)a6 minDate:(id)a7 maxDate:(id)a8;
- (struct CGSize { double x0; double x1; })_sizeOverlayPickersToFit;
- (id)_windowMaskPresentingUpward:(BOOL)a0;
- (void)applyWindowMaskImagePresentingUpward:(BOOL)a0;
- (void)show;

@end
