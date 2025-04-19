@interface PaperKit.CRTextStorage : CRTextStorageBase {
    void /* unknown type, empty encoding */ viewAttributedString;
    void /* unknown type, empty encoding */ mergeableString;
    void /* unknown type, empty encoding */ darkMode;
    void /* unknown type, empty encoding */ isFixingAttributes;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (id)initWithContentsOfMarkdownFileAtURL:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithMarkdown:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithMarkdownString:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithRTF:(id)a0 documentAttributes:(id *)a1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithAttachment:(id)a0 attributes:(id)a1;
- (id)initWithHTML:(id)a0 documentAttributes:(id *)a1;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)initWithPath:(id)a0 documentAttributes:(id *)a1;
- (id)initWithRTFD:(id)a0 documentAttributes:(id *)a1;
- (id)initWithRTFDFileWrapper:(id)a0 documentAttributes:(id *)a1;
- (id)initWithURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 documentAttributes:(id *)a1;
- (id)initWithDocFormat:(id)a0 documentAttributes:(id *)a1;
- (id)initWithHTML:(id)a0 baseURL:(id)a1 documentAttributes:(id *)a2;
- (id)initWithHTML:(id)a0 options:(id)a1 documentAttributes:(id *)a2;
- (id)mutableAttributedString;

@end
