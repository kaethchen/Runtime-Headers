@class GKComponentSystem, NSString, GKEntity;

@interface GKComponent : NSObject <NSCopying, NSSecureCoding> {
    GKEntity *_entity;
    int _usesPerComponentUpdateCount;
    GKComponentSystem *_componentSystem;
    NSString *_componentName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL usesPerComponentUpdate;
@property (nonatomic) GKComponentSystem *componentSystem;
@property (nonatomic) NSString *componentName;
@property (readonly, weak, nonatomic) GKEntity *entity;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (void)setEntity:(id)a0;
- (void)didAddToEntity;
- (void)updateWithDeltaTime:(double)a0;
- (void)willRemoveFromEntity;

@end
