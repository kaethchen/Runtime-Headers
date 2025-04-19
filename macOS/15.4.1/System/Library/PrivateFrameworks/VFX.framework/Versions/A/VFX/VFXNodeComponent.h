@interface VFXNodeComponent : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) id component;
@property (retain, nonatomic) VFXNodeComponent *next;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 component:(id)a1;

@end
