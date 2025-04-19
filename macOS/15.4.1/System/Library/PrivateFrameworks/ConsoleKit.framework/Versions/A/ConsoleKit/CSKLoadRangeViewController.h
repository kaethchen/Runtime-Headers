@class NSTextField, NSView, NSDatePicker, NSPopUpButton, NSDateInterval, NSViewController, CSKStreamSource, NSButton, NSPopover, NSObject;
@protocol OS_dispatch_queue;

@interface CSKLoadRangeViewController : NSViewController {
    NSObject<OS_dispatch_queue> *_populateTimeQueue;
}

@property (nonatomic) unsigned long long fromOptionsEnum;
@property (nonatomic) unsigned long long toOptionsEnum;
@property (weak, nonatomic) NSPopUpButton *fromOptionsPopupButton;
@property (weak, nonatomic) NSPopUpButton *fromDayPopupButton;
@property (weak, nonatomic) NSDatePicker *fromTimeDatePicker;
@property (weak, nonatomic) NSView *toPlaceholderView;
@property (weak, nonatomic) NSView *toDurationView;
@property (weak, nonatomic) NSView *toEndingAtView;
@property (weak, nonatomic) NSPopUpButton *toOptionsPopupButton;
@property (weak, nonatomic) NSPopUpButton *toDayPopupButton;
@property (weak, nonatomic) NSDatePicker *toTimeDatePicker;
@property (weak, nonatomic) NSPopUpButton *toDurationPopupButton;
@property (weak, nonatomic) NSTextField *toDurationTextField;
@property (weak, nonatomic) NSPopUpButton *fromTimeTZPopupButton;
@property (weak, nonatomic) NSPopUpButton *toTimeTZPopupButton;
@property (weak, nonatomic) NSButton *goButton;
@property (weak, nonatomic) NSViewController *popOverViewController;
@property (weak, nonatomic) NSPopover *errorPopOver;
@property (weak, nonatomic) NSTextField *errorPopOverTextField;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (weak, nonatomic) CSKStreamSource *source;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)handleError:(id)a0;
- (void)populateFromOptionsPopupButtons;
- (id)_dateUsingDay:(id)a0 andTime:(id)a1;
- (id)_loadRangeValueItems;
- (void)populateDayPopupButtons;
- (void)populateTimePicker;
- (void)populateToOptionsPopupButtons;
- (void)selectDay:(id)a0;
- (void)setDefaultFromToOptions;
- (void)setFromOption:(id)a0;
- (void)setToOption:(id)a0;
- (double)sourceDuration;
- (id)timingSource;
- (void)updateUIState;

@end
