@class NSString, NSImageView, NSTextField;

@interface IMGroupAcknowledgementPollSectionView : NSView

@property (weak, nonatomic) NSTextField *talliedCountLabel;
@property (weak, nonatomic) NSImageView *acknowledgementTypeIcon;
@property (nonatomic) unsigned long long talliedCount;
@property (nonatomic) unsigned long long acknowledgementType;
@property (copy) NSString *acknowledgmentImageFormat;

- (void).cxx_destruct;

@end
