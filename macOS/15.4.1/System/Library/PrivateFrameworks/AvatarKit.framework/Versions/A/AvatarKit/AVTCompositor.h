@class NSArray, NSMutableSet;

@interface AVTCompositor : NSObject {
    NSMutableSet *_textureProviders;
}

@property (class, readonly, nonatomic) NSArray *propertyNames;

- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)componentDidChangeForTypes:(unsigned long long)a0;
- (void)configureMaterial:(id)a0 propertyNamed:(id)a1 memoji:(id)a2;
- (void)skinColorDidChange;

@end
