@class NSString, UXLabel;

@interface KHEditorTitleView : UXView {
    UXLabel *_titleLabel;
    UXLabel *_detailLabel;
}

@property (copy) NSString *title;
@property (copy) NSString *detail;

- (id)init;
- (void).cxx_destruct;

@end
