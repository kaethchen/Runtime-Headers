@class PGGraphLocationHelper, PGGraphPublicEventCategoryNodeCollection, PGGraph, CLSServiceManager, CLSHolidayCalendarEventService;

@interface PGTitleGenerationContext : NSObject

@property (retain, nonatomic) PGGraph *graph;
@property (readonly) PGGraphLocationHelper *locationHelper;
@property (readonly) CLSHolidayCalendarEventService *holidayService;
@property (readonly) PGGraphPublicEventCategoryNodeCollection *appleEventsCategoryNodes;
@property (readonly) CLSServiceManager *serviceManager;

- (void).cxx_destruct;
- (id)initForTestingWithGraph:(id)a0;
- (id)initLegacyForMemoriesWithServiceManager:(id)a0;
- (id)initWithGraph:(id)a0 serviceManager:(id)a1;

@end
