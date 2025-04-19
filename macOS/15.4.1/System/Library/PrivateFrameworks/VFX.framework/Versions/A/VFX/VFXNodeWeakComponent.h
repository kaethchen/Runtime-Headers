@class VFXNodeComponent;

@interface VFXNodeWeakComponent : NSObject

@property (nonatomic) long long type;
@property (weak, nonatomic) id component;
@property (retain, nonatomic) VFXNodeComponent *next;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 component:(id)a1;

@end
