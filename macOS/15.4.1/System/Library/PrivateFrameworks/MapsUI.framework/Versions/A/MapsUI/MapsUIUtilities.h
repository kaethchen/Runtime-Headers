@interface MapsUIUtilities : NSObject

+ (BOOL)isSafariProcess;
+ (BOOL)isParsecProcess;
+ (BOOL)isSiriProcess;
+ (void)resizeImageIfNeeded:(id)a0 toFrameSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completion:(id /* block */)a3;
+ (BOOL)isSpotlightProcess;
+ (id)bundleIdentifierForContext:(unsigned long long)a0;
+ (BOOL)isDataDetectorsProcess;
+ (BOOL)isInApplicationContext:(unsigned long long)a0;
+ (BOOL)isMapsProcess;
+ (void)performOnMainIfNecessary:(id /* block */)a0;

@end
