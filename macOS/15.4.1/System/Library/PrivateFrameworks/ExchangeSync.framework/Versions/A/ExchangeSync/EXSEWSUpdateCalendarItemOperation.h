@interface EXSEWSUpdateCalendarItemOperation : EXSEWSOperation

@property (nonatomic) BOOL attendeeChangesOccurred;
@property (nonatomic) BOOL wasOrganizedByUser;
@property (nonatomic) BOOL forceNotification;

- (id)initWithProtocol:(id)a0;
- (BOOL)_areAttendeesChangedInChangeItem:(id)a0;
- (id)_buildItemSettersForCalendarChangeItem:(id)a0;
- (BOOL)_changesShouldBeSentToAllAttendeesForChangeItem:(id)a0;
- (id)_nonOrganizerItemSettersForCalendarChangeItem:(id)a0;
- (id)buildAttendeeSettersForChangeItem:(id)a0 withCurrentSetters:(id)a1;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
