@class NSString, WBSBrowsingAssistantAvailabilityLabels, NSTimer;
@protocol WBSContentAvailabilityDisplayPresenting;

@interface WBSContentAvailabilityDisplayController : NSObject {
    WBSBrowsingAssistantAvailabilityLabels *_availabilityLabels;
    NSTimer *_displayTimer;
    unsigned long long _displayedIndex;
}

@property (weak, nonatomic) id<WBSContentAvailabilityDisplayPresenting> presenter;
@property (nonatomic) double labelDisplayDuration;
@property (readonly, nonatomic) unsigned long long cumulativeOptions;
@property (readonly, nonatomic, getter=isDisplaying) BOOL displaying;
@property (readonly, copy, nonatomic) NSString *currentLabel;
@property (readonly, nonatomic) unsigned long long currentOptions;

- (void).cxx_destruct;
- (id)initWithPresenter:(id)a0;
- (void)displayTimerDidFire:(id)a0;
- (void)resetDisplay;
- (void)updateToContentOptions:(unsigned long long)a0;

@end
