@interface EKUIConferenceNoteGadget : EKUINoteGadget

- (BOOL)hasData;
- (id)placeholderText;
- (BOOL)shouldDisplay;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end
