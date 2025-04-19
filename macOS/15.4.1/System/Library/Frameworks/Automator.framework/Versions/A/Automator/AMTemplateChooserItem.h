@class AMWorkflowPersonality, NSArray, NSString, NSImage, AMWorkflowMetaData;

@interface AMTemplateChooserItem : NSObject

@property (class, readonly, nonatomic) NSArray *templateChooserItems;

@property (weak) AMWorkflowPersonality *workflowPersonality;
@property (retain) AMWorkflowMetaData *workflowMetaData;
@property (copy, nonatomic) NSString *imageTitle;
@property (nonatomic) double imageDimension;
@property (nonatomic) struct CGSize { double width; double height; } imageInset;
@property (copy, nonatomic) NSString *templateDescription;
@property (retain, nonatomic) NSImage *imageRepresentation;
@property (readonly, nonatomic) BOOL isSelectable;

- (id)description;
- (void).cxx_destruct;
- (void)configureWithSettingsDictionary:(id)a0;
- (id)initWithWorkflowPersonality:(id)a0;
- (id)initWithWorkflowPersonality:(id)a0 workflowMetaData:(id)a1;

@end
