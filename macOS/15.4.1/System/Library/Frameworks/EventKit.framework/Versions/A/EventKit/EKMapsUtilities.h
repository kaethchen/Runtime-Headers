@interface EKMapsUtilities : NSObject

+ (id)_locationStringForStructuredLocation:(id)a0 withTitle:(id)a1;
+ (void)geocodeEventIfNeeded:(id)a0;
+ (id)mapsURLForLocation:(id)a0 onEvent:(id)a1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)a2;

@end
