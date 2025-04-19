@class NSTextField, EKUIAttendeeCommentCompositeGadget, EKParticipant, NSButton;

@interface EKUIAttendeeCommentSingleGadget : EKUISingleViewGadget {
    EKParticipant *_participant;
    NSTextField *_attendeeNameField;
    NSTextField *_attendeeCommentField;
    NSTextField *_attendeeCommentLastModifiedField;
    NSButton *_clearButton;
    EKUIAttendeeCommentCompositeGadget *_compositeGadget;
}

- (void).cxx_destruct;
- (void)_clearButtonClicked;
- (id)initWithCompositeGadget:(id)a0;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (BOOL)shouldDisplay;
- (void)updateWithParticipant:(id)a0;

@end
