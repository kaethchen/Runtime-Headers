@class NSView, NSString, SFAuthorizationView;

@interface ODCViewControllerBase : NSObject

@property (nonatomic) SFAuthorizationView *authView;
@property (retain) NSView *superview;
@property BOOL locked;
@property (retain) NSString *sourceNodeOfCurrentUser;
@property BOOL lookingForServers;

- (void)dealloc;
- (void)awakeFromNib;
- (void)startUpdating;
- (void)stopUpdating;
- (void)closeSheetAndPrepareForRelease;
- (void)lookForServers;
- (void)sheetControllerDone:(id)a0;
- (void)updateLocked;

@end
