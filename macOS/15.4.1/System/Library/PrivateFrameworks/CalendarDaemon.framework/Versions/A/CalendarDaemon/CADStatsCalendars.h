@class CADStatCollectionContext, NSMutableArray;

@interface CADStatsCalendars : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_calendarInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (BOOL)calendarUsesAuthentication:(void *)a0;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)a0;
- (void)processCalendars:(id)a0 inStore:(void *)a1;
- (BOOL)wantsCalendars;

@end
