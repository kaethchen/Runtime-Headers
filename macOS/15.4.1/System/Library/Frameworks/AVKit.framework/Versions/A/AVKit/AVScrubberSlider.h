@class NSArray, NSDateComponentsFormatter;
@protocol AVScrubberSliderDelegate;

@interface AVScrubberSlider : NSSlider {
    NSArray *_loadedTimeRanges;
    NSDateComponentsFormatter *_dateComponentsFormatter;
    NSArray *_photosensitiveRegions;
}

@property (readonly, nonatomic) double normalizedSliderValue;
@property (weak, nonatomic) id<AVScrubberSliderDelegate> delegate;
@property (retain, nonatomic) NSArray *loadedTimeRanges;
@property (retain, nonatomic) NSArray *photosensitiveRegions;
@property (retain, nonatomic) NSArray *highlightedTimeRanges;
@property (nonatomic) BOOL showsScrubberKnob;
@property (nonatomic) BOOL showsBar;

+ (void)initialize;

- (void).cxx_destruct;
- (id)accessibilityValueDescription;
- (void)mouseDown:(id)a0;
- (void)_didEndScrubbing;
- (void)_willBeginScrubbing;

@end
