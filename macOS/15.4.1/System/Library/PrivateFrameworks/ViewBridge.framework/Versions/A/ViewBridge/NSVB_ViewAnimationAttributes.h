@interface NSVB_ViewAnimationAttributes : NSObject <NSSecureCoding> {
    unsigned char _windowFrameAnimationInProgress : 1;
    unsigned char _allowsImplicitAnimation : 1;
    unsigned char _hasTimingFunctionControlPoints : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL hasTimingFunctionControlPoints;
@property (nonatomic) struct { float p[2]; } c1;
@property (nonatomic) struct { float p[2]; } c2;
@property double duration;
@property BOOL allowsImplicitAnimation;
@property BOOL windowFrameAnimationInProgress;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
