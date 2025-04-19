@class CNContactStore, CNContact, ATXLocationManager, MTAlarmManager, NSDate, EKEventStore, NSMutableDictionary;

@interface ATXHeuristicDevice : NSObject {
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    BOOL _meContactChecked;
    EKEventStore *_eventStore;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
    NSMutableDictionary *_cachedCalendarDicts;
}

@property (class, readonly, nonatomic) MTAlarmManager *sharedAlarmManager;

@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) NSDate *now;
@property (readonly, nonatomic) EKEventStore *eventStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)contactStore;
- (void)updateMeContact;
- (void)setNow:(id)a0;
- (id)meContact;
- (id)resolveContact:(id)a0;
- (id)_contactKeysToFetch;
- (id)wrap:(id)a0;
- (id)initWithLocationManager:(id)a0;
- (id)_calendarVisibilityManager;
- (id)_contactForPredicate:(id)a0;
- (id)_dictContactForIdentifier:(id)a0;
- (id)_dictContactForParticipant:(id)a0 contactCache:(id)a1;
- (id)_dictForAttachment:(id)a0;
- (id)_dictForEvent:(id)a0 contactCache:(id)a1;
- (id)_unwrap:(id)a0;
- (id)_wrap:(id)a0;
- (id)contactForParticipant:(id)a0;
- (id)contactsForPredicate:(id)a0;
- (id)dictContactForCNContact:(id)a0;
- (id)dictForEvent:(id)a0;
- (id)dictForEvent:(id)a0 contactCache:(id)a1;
- (id)organizerContactWithEvent:(id)a0;
- (id)visibleCalendarsInCurrentFocus;
- (id)visibleCalendarsRegardlessOfFocus;

@end
