@interface PXWidgetTimeline : NSObject

+ (BOOL)_requesWidgetTimelineReloadForWidgetKind:(id)a0 withError:(id *)a1;
+ (BOOL)requestAlbumWidgetTimelineReloadWithError:(id *)a0;
+ (BOOL)requestForYouWidgetTimelineReloadWithError:(id *)a0;
+ (void)requestReloadForAllWidgetTimelines;
+ (id)timelineFromLibrary:(id)a0;
+ (id)timelineFromLibrary:(id)a0 albumIdentifier:(id)a1 widgetIdentifier:(id)a2 widgetSize:(struct CGSize { double x0; double x1; })a3;
+ (id)timelineFromLibrary:(id)a0 forWidgetSize:(struct CGSize { double x0; double x1; })a1 timelineSize:(unsigned long long)a2;
+ (id)timelineFromLibrary:(id)a0 timelineSize:(unsigned long long)a1 withOptions:(id)a2;

@end
