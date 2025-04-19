@class NSString;

@interface ULDisplayMonitorEventDisplayState : ULEvent

@property (retain, nonatomic) NSString *appInFocus;
@property (nonatomic) BOOL appInFocusChanged;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) BOOL displayOnChanged;
@property (nonatomic) BOOL screenLocked;
@property (nonatomic) BOOL screenLockedChanged;

- (void).cxx_destruct;

@end
