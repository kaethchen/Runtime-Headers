@class NSString;

@interface _AMiCalApplication : SBApplication

@property (readonly, copy) NSString *name;
@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *version;

+ (id)application;

- (id)windows;
- (id)documents;
- (void)open:(id)a0;
- (void)print:(id)a0;
- (id)calendars;
- (void)reloadCalendars;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (void)viewCalendarAt:(id)a0;
- (void)GetURL:(id)a0;
- (void)createCalendarWithName:(id)a0;
- (void)quitSaving:(int)a0;
- (void)switchViewTo:(int)a0;

@end
