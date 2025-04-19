@class IKImageEditPanel;

@interface IKImageEditView : NSView

@property IKImageEditPanel *imageEditPanel;
@property id dataSource;
@property BOOL dataSourceIsIKImageView;

+ (id)sharedImageEditView;

- (void)dataSourceDidChange;
- (void)setDataSource:(id)a0 imageEditPanel:(id)a1;
- (void)viewWillBecomeActive;
- (void)viewWillBecomeInActive;

@end
