@class CPKSearchFieldEditor;

@interface CPKSearchFieldCell : NSSearchFieldCell {
    CPKSearchFieldEditor *_customEditor;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)fieldEditorForView:(id)a0;
- (id)initTextCell:(id)a0;
- (void)_privateInit;

@end
