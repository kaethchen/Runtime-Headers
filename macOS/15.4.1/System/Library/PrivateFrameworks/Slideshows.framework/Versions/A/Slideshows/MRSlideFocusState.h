@class MRSlideInfo, NSString, MRAction, MRLayer;

@interface MRSlideFocusState : NSObject

@property (retain, nonatomic) MRLayer *delegate;
@property (retain, nonatomic) MRAction *action;
@property (retain, nonatomic) MRSlideInfo *slideInfo;
@property (copy, nonatomic) NSString *slideID;
@property (retain, nonatomic) MRSlideInfo *previousSlideInfo;
@property (copy, nonatomic) NSString *previousSlideID;
@property (retain, nonatomic) MRSlideInfo *nextSlideInfo;
@property (copy, nonatomic) NSString *nextSlideID;
@property (nonatomic) unsigned long long currentFocuserIndex;
@property (nonatomic) BOOL isTransitioning;
@property (nonatomic) BOOL isGoingToNext;
@property (nonatomic) BOOL delegateIsTransitioningToo;
@property (nonatomic) BOOL isInZoomMode;

- (void)dealloc;

@end
