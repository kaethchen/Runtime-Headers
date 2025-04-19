@class IMKInputController, IMKUICandidateTouchBarController, IMKUIWindowBasedCandidateController;

@interface IMKUIInformation : NSObject

@property (retain, nonatomic) IMKUICandidateTouchBarController *touchBarController;
@property (retain, nonatomic) IMKUIWindowBasedCandidateController *visibleOnscreenController;
@property (readonly, nonatomic) id textClient;
@property (readonly, nonatomic) IMKInputController *inputController;

+ (BOOL)isAppleInternal;
+ (BOOL)isTouchBarAvailable;
+ (double)maxWidthOfHandwritingCandidates;
+ (double)candidateSurfaceWidth;
+ (BOOL)isCJPerformanceEnabled;
+ (BOOL)isUsingSubclassingImplementation;
+ (double)quickTypeBarWidth;
+ (id)sharedInformation;
+ (double)touchBarWidth;
+ (double)widthOfHandwritingCandidatesForTouchBarWidth:(double)a0 candidateSurfaceWidth:(double)a1;

- (void)dealloc;

@end
