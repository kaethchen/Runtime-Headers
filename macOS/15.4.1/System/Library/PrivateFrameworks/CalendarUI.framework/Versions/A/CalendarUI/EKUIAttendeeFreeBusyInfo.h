@class EKUILocationTableCellView, EKUITokenAttachmentCell;

@interface EKUIAttendeeFreeBusyInfo : NSObject

@property (retain) EKUITokenAttachmentCell *cell;
@property int freeBusyType;
@property (retain) EKUILocationTableCellView *locationView;

- (id)init;
- (void).cxx_destruct;

@end
