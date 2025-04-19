@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask

@property (nonatomic) BOOL getScheduleTags;
@property (nonatomic) BOOL getScheduleChanges;

- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 getScheduleTags:(BOOL)a2 getScheduleChanges:(BOOL)a3;
- (id)copyAdditionalPropElements;
- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 getScheduleTags:(BOOL)a2 getScheduleChanges:(BOOL)a3 appSpecificCalendarItemClass:(Class)a4;
- (void)setAdditionalProperties:(id)a0 onDataItem:(id)a1;

@end
