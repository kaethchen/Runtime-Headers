@class AVTimeFormatter;

@interface AVTimeIndicatorPopover : NSPopover {
    AVTimeFormatter *_timeFormatter;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateTimeValue:(double)a0;

@end
