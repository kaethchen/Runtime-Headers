@interface ULDisplayMonitorEventDisplayState_OSX : ULEvent

@property (nonatomic) BOOL screenOn;
@property (nonatomic) BOOL screenOnChanged;
@property (nonatomic) BOOL clamshellMode;
@property (nonatomic) BOOL clamshellModeChanged;
@property (nonatomic) BOOL screenLocked;
@property (nonatomic) BOOL screenLockedChanged;

@end
