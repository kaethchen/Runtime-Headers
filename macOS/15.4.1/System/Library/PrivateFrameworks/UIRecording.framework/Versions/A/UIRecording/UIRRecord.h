@class UIRAccessibilityProcess, NSArray, UIRAccessibilityElement, NSDictionary;

@interface UIRRecord : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_uiEvents;
    id _delegate;
    double _timeoutSeconds;
    double _endTime;
    BOOL _perEventTimeout;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _targetPSN;
    struct __CFMachPort { } *_checkForCancelEventTapPort;
    struct __UIRRecordDelegateRespondsTo { unsigned char uirRecord_willSendEvent_associatedWithEvent : 1; unsigned char uirRecord_didStartPlayback : 1; unsigned char uirRecord_didStopPlaybackWithErrorInfo : 1; unsigned int reserved : 29; } _delegateRespondsTo;
    id _future1;
    id _future2;
    id _future3;
    id _future4;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) UIRAccessibilityElement *systemWideElement;
@property (retain) UIRAccessibilityProcess *targetApplicationElement;
@property (readonly) NSArray *uiEvents;
@property id delegate;
@property (nonatomic) BOOL isPlayingBack;
@property (copy) NSDictionary *playbackErrorInfo;
@property BOOL userCanceledPlayback;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addEvent:(id)a0;
- (void)stopPlayback;
- (void)playbackRecordingWithTimeout:(double)a0 forEachEvent:(BOOL)a1 targetingPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2;
- (void)setUiEvents:(id)a0;
- (void)_runCheckForCancelCommandThread;
- (void)_glideCursorToElementWithStack:(id)a0 withStartingIndex:(long long)a1 withEvent:(struct __CGEvent { } *)a2 withEventSource:(struct __CGEventSource { } *)a3;
- (void)_glideCursorToLocation:(struct CGPoint { double x0; double x1; })a0 withEvent:(struct __CGEvent { } *)a1 withEventSource:(struct __CGEventSource { } *)a2;
- (void)_glideToElementInMenuWithEvent:(id)a0 withEventSource:(struct __CGEventSource { } *)a1;
- (long long)_indexOfElementMatchingCurrentMousePosition:(id)a0 forProcess:(id)a1;
- (long long)_indexOfFirstElementInStack:(id)a0 afterIndex:(long long)a1 withAnyAccessibilityRole:(id)a2;
- (void)_moveMouseToLocation:(struct CGPoint { double x0; double x1; })a0 withEvent:(struct __CGEvent { } *)a1 withEventSource:(struct __CGEventSource { } *)a2;
- (void)_playbackRecording;
- (unsigned long long)_raiseMouseButtons:(unsigned long long)a0 withEventSource:(struct __CGEventSource { } *)a1;
- (void)_startPlayback;
- (struct __CFMachPort { } *)checkForCancelEventTapPort;
- (void)setCheckForCancelEventTapPort:(struct __CFMachPort { } *)a0;

@end
