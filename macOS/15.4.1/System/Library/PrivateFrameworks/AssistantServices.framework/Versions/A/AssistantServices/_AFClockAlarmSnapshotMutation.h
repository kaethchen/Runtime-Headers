@class NSString, NSDictionary, NSOrderedSet, NSDate, AFClockAlarmSnapshot;

@interface _AFClockAlarmSnapshotMutation : NSObject <AFClockAlarmSnapshotMutating> {
    AFClockAlarmSnapshot *_base;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_notifiedFiringAlarmIDs;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneration : 1; unsigned char hasDate : 1; unsigned char hasAlarmsByID : 1; unsigned char hasNotifiedFiringAlarmIDs : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDate:(id)a0;
- (BOOL)isDirty;
- (void)setGeneration:(unsigned long long)a0;
- (id)getDate;
- (id)getAlarmsByID;
- (unsigned long long)getGeneration;
- (id)getNotifiedFiringAlarmIDs;
- (id)initWithBase:(id)a0;
- (void)setAlarmsByID:(id)a0;
- (void)setNotifiedFiringAlarmIDs:(id)a0;

@end
