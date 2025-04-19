@class NSString, VFXNode, VFXState;

@interface VFXStateItem : NSObject <NSSecureCoding> {
    id _target;
    NSString *_keyPath;
    id _value;
    VFXNode *_parent;
    unsigned long long _index;
    VFXState *_state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long action;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id value;

+ (id)removeNode:(id)a0;
+ (id)insertChildNode:(id)a0 parent:(id)a1 atIndex:(unsigned long long)a2;
+ (id)addAnimation:(id)a0 to:(id)a1 keyPath:(id)a2;
+ (id)removeAnimationFrom:(id)a0 keyPath:(id)a1;
+ (id)setValue:(id)a0 to:(id)a1 keyPath:(id)a2;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (void)setState:(id)a0;
- (unsigned long long)index;
- (id)parent;
- (void)apply;
- (id)makeReverseItem;
- (id)_makeReverseItem;
- (id)initWithAction:(long long)a0 target:(id)a1 keyPath:(id)a2 value:(id)a3 parent:(id)a4 index:(unsigned long long)a5;
- (BOOL)replaces:(id)a0;

@end
