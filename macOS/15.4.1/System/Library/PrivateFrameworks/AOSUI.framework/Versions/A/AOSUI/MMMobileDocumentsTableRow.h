@class NSImageView, NSTextField, NSMutableDictionary, NSProgressIndicator, NSLayoutConstraint, NSButton;
@protocol MMMobileDocumentsTableRowDelegate;

@interface MMMobileDocumentsTableRow : NSTableRowView {
    NSButton *_checkbox;
    NSTextField *_serviceNameField;
    NSImageView *_icon;
    NSMutableDictionary *_appDict;
    NSLayoutConstraint *_leadingWidth;
    NSTextField *_progressField;
    NSProgressIndicator *_spinner;
    NSLayoutConstraint *_progressLargeServiceSpacer;
}

@property (nonatomic) id<MMMobileDocumentsTableRowDelegate> delegate;
@property (nonatomic) int rowViewType;

+ (id)createFromNib;

- (void).cxx_destruct;
- (void)setEnabledState:(BOOL)a0;
- (void)enableServicePressed:(id)a0;
- (void)setAppDict:(id)a0;
- (void)setProgressString:(id)a0;
- (void)setRowEnabled:(BOOL)a0;
- (void)updateImageAndName;

@end
