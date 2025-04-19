@class NSArray, ICAttributionViewConfiguration, NSColor;

@interface ICMAttributionsViewController : NSViewController {
    void /* unknown type, empty encoding */ _configurations;
    void /* unknown type, empty encoding */ _focusedConfiguration;
    void /* unknown type, empty encoding */ _backgroundColor;
    void /* unknown type, empty encoding */ attributionsUpdater;
    void /* unknown type, empty encoding */ attributionsObservation;
    void /* unknown type, empty encoding */ focusedConfigurationObservation;
    void /* unknown type, empty encoding */ filterObservation;
    void /* unknown type, empty encoding */ sidebarSwipeGestureAmountObservation;
    void /* unknown type, empty encoding */ sidebarHiddenObservation;
    void /* unknown type, empty encoding */ shareObservation;
    void /* unknown type, empty encoding */ isPreview;
    void /* unknown type, empty encoding */ hasFocus;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ textView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ sidebarController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ authorHighlightsUpdater;
@property (nonatomic, copy) NSArray *configurations;
@property (nonatomic, retain) ICAttributionViewConfiguration *focusedConfiguration;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ filter;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)observeAttributions;
- (void)stopObservingAttributions;

@end
