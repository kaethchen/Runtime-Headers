@class EKCalendar, EKUIGadget, NSString, EKViewController, NSMutableArray, EKCalendarItem;

@interface EKUICalendarPopUpButton : NSPopUpButton <NSMenuDelegate>

@property (retain) NSMutableArray *allowedItemCache;
@property long long sourceCount;
@property (weak) EKViewController *viewController;
@property unsigned long long entityType;
@property (nonatomic) BOOL menuIsOpen;
@property (nonatomic) BOOL needsUpdateAfterDismiss;
@property (weak, nonatomic) EKCalendarItem *item;
@property BOOL showCalendarName;
@property BOOL showCalendarSwatch;
@property BOOL showButtonBorder;
@property (nonatomic) BOOL isReadOnly;
@property (readonly) EKCalendar *selectedCalendar;
@property (weak) EKUIGadget *gadget;
@property BOOL populated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (id)_calendarForItem:(id)a0;

- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)isTruncated;
- (id)initWithViewController:(id)a0;
- (void)_cacheCalendar:(id)a0;
- (void)_cacheSource:(id)a0 withCalendars:(id)a1;
- (void)_cacheValidCalendars;
- (BOOL)_calendarMatchesCurrentItemCalendar:(id)a0;
- (id)_calendars;
- (id)_menuItemForCalendar:(id)a0 withCachedElement:(id)a1;
- (void)_populatePopUp;
- (void)_populatePopUpFromCache;
- (BOOL)_shouldShowSource:(id)a0;
- (void)reloadPopup:(id)a0;
- (void)updateIcon;

@end
