@class NSArray;

@interface EMIMDFREmojiSearchListDocumentView : EMIMDFREmojiListDocumentView

@property (retain) NSArray *characters;

- (void)dealloc;
- (id)initWithSearchResult:(id)a0;
- (id)_labelForIndex:(long long)a0;
- (id)_characterMatrixViewForIndex:(long long)a0;

@end
