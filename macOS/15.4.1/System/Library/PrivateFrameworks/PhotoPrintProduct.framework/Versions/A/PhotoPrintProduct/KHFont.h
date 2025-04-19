@class NSFont;

@interface KHFont : NSObject

@property (retain) NSFont *internalFont;

+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)systemFontOfSize:(double)a0;
+ (id)safelyLoadFontWithName:(id)a0 size:(double)a1;

- (void).cxx_destruct;
- (id)systemFont;

@end
