@class NSImageView, NSString, NSTextField, NSLayoutConstraint;

@interface NewStrongPasswordAutoFillCellView : ColorInvertingTableCellView <TouchIconAndBadgeConfigurable> {
    NSTextField *_subtitleTextField;
    NSImageView *_badgeImageView;
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_titleTextFieldToImageViewVerticalCenteringConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })fittingSizeWithCompletionListItem:(void *)a0;

@end
