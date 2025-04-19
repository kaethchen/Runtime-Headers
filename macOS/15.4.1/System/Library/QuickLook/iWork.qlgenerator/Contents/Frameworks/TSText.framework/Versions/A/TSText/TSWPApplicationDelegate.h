@interface TSWPApplicationDelegate : TSCKApplicationDelegate

@property (readonly, nonatomic) BOOL showChineseNamedPointSizes;

- (id)defaultHyperlinkURL;
- (id)equationEditorAPDID;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;

@end
