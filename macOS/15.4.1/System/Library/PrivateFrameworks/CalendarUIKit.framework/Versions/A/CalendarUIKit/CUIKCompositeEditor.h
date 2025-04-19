@class NSString, NSArray, NSDictionary;

@interface CUIKCompositeEditor : NSObject <CUIKEditorExtended> {
    NSArray *_editors;
    NSDictionary *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (BOOL)saveEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (BOOL)calendarUsesEditor:(id)a0;
- (BOOL)commitEventForOOPModificationRecording:(id)a0 error:(id *)a1;
- (void)deleteCalendar:(id)a0 forEntityType:(unsigned long long)a1;
- (void)deleteCalendars:(id)a0;
- (BOOL)deleteEvent:(id)a0 span:(long long)a1 error:(id *)a2;
- (void)deleteEvents:(id)a0;
- (void)deleteEvents:(id)a0 span:(long long)a1;
- (void)deleteEvents:(id)a0 span:(long long)a1 result:(id /* block */)a2;
- (void)deleteSources:(id)a0;
- (void)dispatchCalendar:(id)a0 block:(id /* block */)a1;
- (void)dispatchCalendars:(id)a0 block:(id /* block */)a1;
- (void)dispatchEvent:(id)a0 block:(id /* block */)a1;
- (void)dispatchEvents:(id)a0 block:(id /* block */)a1;
- (void)dispatchSources:(id)a0 block:(id /* block */)a1;
- (BOOL)eventUsesEditor:(id)a0;
- (id)initWithEditors:(id)a0;
- (void)performWithOptions:(id)a0 block:(id /* block */)a1;
- (void)saveCalendars:(id)a0;
- (void)saveChangesToEvents:(id)a0 impliedCommitDecision:(BOOL)a1;
- (void)saveChangesToEvents:(id)a0 span:(long long)a1;
- (void)saveChangesToSources:(id)a0;
- (BOOL)saveEventForOOPModificationRecording:(id)a0 span:(long long)a1 error:(id *)a2;
- (BOOL)saveNewEvents:(id)a0 commit:(BOOL)a1 error:(id *)a2;
- (void)saveNewSources:(id)a0 commit:(BOOL)a1;
- (BOOL)sourceUsesEditor:(id)a0;

@end
