@interface AXEventTapManagerFilterEvents : NSObject

@property (nonatomic) BOOL wantsDigitizerEvents;
@property (nonatomic) BOOL wantsKeyboardEvents;
@property (nonatomic) BOOL wantsATVRemoteEvents;
@property (nonatomic) BOOL wantsLisaEvents;
@property (nonatomic) BOOL wantsMouseEvents;
@property (nonatomic) BOOL wantsAccessibilityEvents;
@property (nonatomic) BOOL wantsVolumeButtonEvents;
@property (nonatomic) BOOL wantsStylusEvents;

@end
