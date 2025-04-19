@class VFXState, NSMutableArray, VFXWorld;

@interface VFXStateManager : NSObject <NSSecureCoding> {
    VFXState *_activeState;
    VFXState *_reverseActiveState;
    VFXWorld *_world;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *states;
@property (retain, nonatomic) VFXState *activeState;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addState:(id)a0;
- (void)removeState:(id)a0;
- (id)stateWithName:(id)a0;
- (id)world;
- (void)setWorld:(id)a0;
- (void)addReverseItem:(id)a0;
- (void)baseState:(id)a0 on:(id)a1;
- (void)removeReverseItem:(id)a0;

@end
