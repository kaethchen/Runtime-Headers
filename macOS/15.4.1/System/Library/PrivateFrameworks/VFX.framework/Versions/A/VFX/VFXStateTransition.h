@class VFXState;

@interface VFXStateTransition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VFXState *sourceState;
@property (readonly, nonatomic) VFXState *targetState;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0 andTarget:(id)a1;

@end
