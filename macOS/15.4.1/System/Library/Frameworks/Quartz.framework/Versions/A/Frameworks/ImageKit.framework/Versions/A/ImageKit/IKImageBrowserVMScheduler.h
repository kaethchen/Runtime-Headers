@class IKImageBrowserView, NSDate;

@interface IKImageBrowserVMScheduler : NSObject {
    IKImageBrowserView *_browser;
    BOOL _pause;
    BOOL _idle;
    BOOL _scheduleShouldAbort;
    BOOL _needScheduleVMForScrolling;
    int _scrollScheduleIndex;
    id _firstImageScheduled;
    int _vramBindedCount;
    struct _NSRange { unsigned long long location; unsigned long long length; } _zoomScheduleItemRange;
    NSDate *_lastDebugDisplay;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)browser;
- (void)setBrowser:(id)a0;
- (void)schedule;
- (void)abortSchedule;
- (void)browserDatasourceChanged;
- (void)browserScroll;
- (void)browserZoom;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })currentVRamBindedRange;
- (BOOL)hasRamLeftToContinueSchedule;
- (BOOL)hasVRamLeftToContinueSchedule;
- (id)scheduleProgress;
- (id)scheduleTaskPriority;
- (void)scrollScheduleStep;
- (void)setFirstImageScheduled:(id)a0;
- (void)startSchedule;

@end
