@class NSArray, NSImageView, CalUILabel;

@interface TrailingIconsAndTextView : NSView {
    NSArray *_changingConstraints;
    BOOL _attachmentHidden;
    BOOL _repeatHidden;
    BOOL _attendeeHidden;
}

@property (readonly, nonatomic) CalUILabel *textView;
@property (readonly, nonatomic) NSImageView *repeatView;
@property (readonly, nonatomic) NSImageView *attachmentView;
@property (readonly, nonatomic) NSImageView *attendeeView;

- (id)init;
- (void).cxx_destruct;
- (void)createAttachmentViewIfNeeded;
- (void)createAttendeeViewIfNeeded;
- (void)createRepeatViewIfNeeded;
- (void)setRepeatHidden:(BOOL)a0 attachmentHidden:(BOOL)a1 attendeeHidden:(BOOL)a2;

@end
