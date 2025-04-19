@interface MKIconManager : NSObject

+ (id)_imageForFeatureStyleAttributes:(id)a0 iconText:(id)a1 size:(unsigned long long)a2 forScale:(double)a3 navMode:(BOOL)a4 nightMode:(BOOL)a5;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 navMode:(BOOL)a3;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 navMode:(BOOL)a3 nightMode:(BOOL)a4;
+ (id)_imageForFeatureStyleAttributes:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 nightMode:(BOOL)a3;
+ (id)iconManager;
+ (id)imageForIconID:(unsigned int)a0 contentScale:(double)a1 sizeGroup:(unsigned long long)a2 nightMode:(BOOL)a3;
+ (id)imageForMapItem:(id)a0 forScale:(double)a1;
+ (id)imageForMapItem:(id)a0 forScale:(double)a1 fallbackToBundleIcon:(BOOL)a2;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 fallbackToBundleIcon:(BOOL)a3;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(BOOL *)a3;
+ (id)imageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(BOOL *)a3 fallbackToBundleIcon:(BOOL)a4;
+ (id)imageForRouteAnnotationStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(BOOL *)a3;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(BOOL *)a3 customIconID:(unsigned long long)a4;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(BOOL *)a3 customIconID:(unsigned long long)a4 fallbackToBundleIcon:(BOOL)a5 transparent:(BOOL)a6 interactive:(BOOL)a7;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(BOOL *)a3 transparent:(BOOL)a4;
+ (id)imageForStyle:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 isResizableImage:(BOOL *)a3 transparent:(BOOL)a4 interactive:(BOOL)a5;
+ (id)imageForTrafficCamera:(id)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForTrafficCamera:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 nightMode:(BOOL)a3;
+ (id)imageForTrafficIncidentType:(long long)a0 size:(unsigned long long)a1 forScale:(double)a2;
+ (id)imageForTrafficIncidentType:(long long)a0 size:(unsigned long long)a1 forScale:(double)a2 nightMode:(BOOL)a3;
+ (struct CGColor { } *)newFillColorForStyleAttributes:(id)a0 forScale:(double)a1;
+ (struct CGColor { } *)newGlyphColorForStyleAttributes:(id)a0 forScale:(double)a1;
+ (struct CGColor { } *)newHaloColorForStyleAttributes:(id)a0 forScale:(double)a1;
+ (void)requestImageForMapItem:(id)a0 size:(unsigned long long)a1 forScale:(double)a2 completionHandler:(id /* block */)a3;
+ (void)requestImageForStyleAttributes:(id)a0 size:(unsigned long long)a1 scale:(double)a2 completionHandler:(id /* block */)a3;
+ (void)setDiskCacheURL:(id)a0;

@end
