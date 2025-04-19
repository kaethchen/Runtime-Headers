@class NSMapTable;

@interface TableCellViewWithCustomHighlightedViews : NSTableCellView {
    NSMapTable *_attributedStringsForBackgroundStyles;
    NSMapTable *_imagesForBackgroundStyles;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setBackgroundStyle:(long long)a0;
- (void)setAttributedString:(id)a0 forBackgroundStyle:(long long)a1 ofTextField:(id)a2;
- (void)setImage:(id)a0 forBackgroundStyle:(long long)a1 ofImageView:(id)a2;

@end
