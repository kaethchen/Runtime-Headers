@class NSButton, QFilterImageInfo, NSTextField;

@interface QComponentImageSamplingCellView : NSTableCellView

@property (retain) NSButton *setScaleCheckbox;
@property (retain) NSButton *setResolutionCheckbox;
@property (retain) NSButton *constrainSizeCheckbox;
@property (retain) NSTextField *scaleText;
@property (retain) NSTextField *resolutionText;
@property (retain) NSTextField *minSizeText;
@property (readonly, nonatomic) QFilterImageInfo *imageInfo;

- (void)dealloc;
- (void)setObjectValue:(id)a0;
- (void)constrainSizeCheckboxAction:(id)a0;
- (void)setResolutionCheckboxAction:(id)a0;
- (void)setScaleCheckboxAction:(id)a0;

@end
