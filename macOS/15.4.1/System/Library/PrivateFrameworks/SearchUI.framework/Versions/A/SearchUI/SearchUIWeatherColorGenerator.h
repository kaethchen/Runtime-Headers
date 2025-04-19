@class SFWeatherColor;

@interface SearchUIWeatherColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFWeatherColor *sfColor;

- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithSFColor:(id)a0;

@end
