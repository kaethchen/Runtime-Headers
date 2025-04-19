@class NSArray;

@interface AVAudioUnitComponentManager : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSArray *tagNames;
@property (readonly, nonatomic) NSArray *standardLocalizedTagNames;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedAudioUnitComponentManager;
+ (void)privateAllocInitSingleton;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)localeChanged:(id)a0;
- (id)componentsMatchingDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;
- (id)componentsMatchingPredicate:(id)a0;
- (id)componentsPassingTest:(id /* block */)a0;
- (void)registrationsChanged:(id)a0;

@end
