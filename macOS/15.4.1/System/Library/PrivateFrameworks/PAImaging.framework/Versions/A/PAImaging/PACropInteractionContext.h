@interface PACropInteractionContext : NSObject

@property (readonly, nonatomic) BOOL shouldPreserveTargetArea;
@property (readonly, nonatomic) BOOL shouldUpdateTargetAreaOnBeginInteractive;
@property (readonly, nonatomic) BOOL shouldUpdateViewportOnEndInteractive;
@property (nonatomic) unsigned long long keyModificationMask;

+ (id)sharedCropInteractionContext;
+ (id)sharedCropPerspectiveContext;
+ (id)sharedCropRotationContext;
+ (id)sharedCropZoomContext;

@end
