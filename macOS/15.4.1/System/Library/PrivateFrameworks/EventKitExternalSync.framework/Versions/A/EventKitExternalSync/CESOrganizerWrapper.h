@interface CESOrganizerWrapper : CESAttendeeWrapper

- (id)event;
- (id)recordID;
- (id)organizer;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
