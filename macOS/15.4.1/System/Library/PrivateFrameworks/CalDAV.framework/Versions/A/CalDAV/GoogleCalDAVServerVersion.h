@interface GoogleCalDAVServerVersion : CalDAVConcreteServerVersion

- (id)init;
- (id)type;
- (BOOL)requiresOpeningAttachmentAsLink;
- (BOOL)shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;
- (id)supportedCalendarComponentSets;

@end
