@class NSString, NSAnimation;

@interface NSTargetAnimationInfo : NSObject <NSAnimationProgressMark, NSCoding> {
    NSAnimation *_animation;
    float _progress;
    BOOL _start;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)floatValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnimation:(id)a0 progress:(float)a1 start:(BOOL)a2;
- (void)startOrStopTargetAnimation;

@end
