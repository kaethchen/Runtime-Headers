@interface ACDPluginAnalyticsSender : NSObject

+ (void)_selected_PostTapToRadar:(id)a0 description:(id)a1;
+ (double)_timeSinceLastTTROffered;
+ (BOOL)accountsTTREnabled;
+ (void)openTapToRadarWithAlertTitle:(id)a0 alertDescription:(id)a1 TTRTitle:(id)a2 TTRDescription:(id)a3;

@end
