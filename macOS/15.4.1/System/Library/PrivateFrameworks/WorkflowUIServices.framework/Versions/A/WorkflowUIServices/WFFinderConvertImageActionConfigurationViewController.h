@class NSButton, NSDictionary, NSPopUpButton;

@interface WFFinderConvertImageActionConfigurationViewController : NSViewController

@property (readonly, nonatomic) NSPopUpButton *formatPicker;
@property (readonly, nonatomic) NSPopUpButton *imageSizePicker;
@property (readonly, nonatomic) NSButton *preservesMetadataButton;
@property (readonly, nonatomic) NSButton *convertButton;
@property (readonly, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSDictionary *sizes;
@property (nonatomic) BOOL sizesAreApproximate;
@property (copy, nonatomic) id /* block */ formatChangedBlock;
@property (copy, nonatomic) id /* block */ descriptorSelectedBlock;

- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)loadView;
- (void)convertButtonPressed:(id)a0;
- (id)labelViewWithTitle:(id)a0;
- (BOOL)preservesMetadata;
- (void)recomputeImageSizeLabels;
- (id)resizeDescriptor;
- (void)selectedFormatChanged:(id)a0;
- (void)setSizes:(id)a0 approximate:(BOOL)a1;
- (void)updateConvertButtonTitle;

@end
