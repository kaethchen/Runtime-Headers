@interface EKUIAttendeeTokenAttachmentCell : EKUITokenAttachmentCell

@property BOOL isExpanded;
@property BOOL attendeeHasAddress;
@property BOOL isOverAttendeeLimit;

- (void)setRepresentedObject:(id)a0;
- (id)textColor;
- (id)tokenTintColor;
- (BOOL)shouldShowToken;
- (int)freeBusyType;
- (id)imageForRepresentedObject;
- (id)initCellForTokenField:(id)a0;
- (BOOL)isCompletedToken;
- (id)stringForRepresentedObject;

@end
