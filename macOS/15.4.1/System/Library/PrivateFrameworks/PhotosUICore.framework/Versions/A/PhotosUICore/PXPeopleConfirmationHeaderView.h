@class UXLabel, PXPeopleScalableAvatarView, NSString;
@protocol PXPerson;

@interface PXPeopleConfirmationHeaderView : UXCollectionReusableView

@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) UXLabel *titleLabel;
@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (retain, nonatomic) UXLabel *descriptionLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupHeader;

@end
