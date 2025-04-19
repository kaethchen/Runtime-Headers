@class NSString;

@interface ISAppearanceEffect : NSObject <ISEffect>

@property long long appearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppearance:(long long)a0;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
