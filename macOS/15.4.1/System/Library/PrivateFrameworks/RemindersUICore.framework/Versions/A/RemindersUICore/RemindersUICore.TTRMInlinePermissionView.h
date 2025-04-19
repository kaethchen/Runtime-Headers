@interface RemindersUICore.TTRMInlinePermissionView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ contentLayoutGuide;
    void /* unknown type, empty encoding */ separatorLayoutGuide;
    void /* unknown type, empty encoding */ primaryButtonLayoutGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ directionalEdgeInsets;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyLabelVisibleConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyLabelHiddenConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_primaryButtonSectionVisibleConstraints;
    void /* unknown type, empty encoding */ appliedConfiguration;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissButtonActionWrapper;
- (void)primaryButtonActionWrapper;

@end
