@class NSString, NSAttributedString, NSFont;

@interface _TtC7SwiftUIP33_9328C7AF9E3B9BEAB98B79BF5FE9466221AppKitSearchFieldCell : NSSearchFieldCell {
    void /* unknown type, empty encoding */ disableAutocorrection;
    void /* unknown type, empty encoding */ fieldEditor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tokenFieldCell;
}

@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic, retain) NSFont *font;
@property (nonatomic, copy) NSString *placeholderString;
@property (nonatomic, retain) NSAttributedString *placeholderAttributedString;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)fieldEditorForView:(id)a0;
- (id)initTextCell:(id)a0;
- (id)setUpFieldEditorAttributes:(id)a0;
- (void)tokenFieldAction:(id)a0;

@end
