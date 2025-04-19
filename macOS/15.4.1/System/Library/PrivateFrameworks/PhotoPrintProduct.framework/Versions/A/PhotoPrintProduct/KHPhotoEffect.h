@class NSString, CIFilter;

@interface KHPhotoEffect : NSObject

@property (readonly, nonatomic) CIFilter *filter;
@property (readonly, nonatomic) NSString *filterName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hidden;

+ (id)allEffects;
+ (id)_effectWithFilterName:(id)a0 displayName:(id)a1 hidden:(BOOL)a2;
+ (id)effectWithFilterName:(id)a0;
+ (unsigned long long)indexOfEffectWithFilterName:(id)a0;
+ (id)visibleEffects;

- (void).cxx_destruct;

@end
