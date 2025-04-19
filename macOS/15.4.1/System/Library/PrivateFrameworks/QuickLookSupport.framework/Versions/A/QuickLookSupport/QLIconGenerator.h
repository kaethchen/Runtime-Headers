@interface QLIconGenerator : NSObject

+ (struct CGImage { } *)_copyIconImageFromURL:(id)a0 withFPItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 darkMode:(BOOL)a4;
+ (id)_isIconDecorationFromFPItemDecoration:(id)a0;
+ (BOOL)_isSharedDirectory:(id)a0;
+ (BOOL)_isSharedURL:(id)a0;
+ (BOOL)_isTopLevelSharedDirectory:(id)a0;
+ (struct CGImage { } *)copyIconImageFromURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 darkMode:(BOOL)a3;
+ (void)fetchIconImageFromURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 darkMode:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
