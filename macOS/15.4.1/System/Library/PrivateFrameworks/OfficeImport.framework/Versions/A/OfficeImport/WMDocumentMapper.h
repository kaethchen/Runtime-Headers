@class WDDocument, NSString;

@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString *mFileName;
}

@property (readonly) WDDocument *document;

- (void).cxx_destruct;
- (id)fileName;
- (double)bottomMargin;
- (double)leftMargin;
- (double)rightMargin;
- (void)setFileName:(id)a0;
- (double)topMargin;
- (id)documentTitle;
- (id)archiver;
- (int)defaultTabWidth;
- (id)blipAtIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })contentSizeForDevice;
- (BOOL)hasSessionBreakAtIndex:(unsigned long long)a0;
- (double)headerMargin;
- (void)mapDefaultCssStylesAt:(id)a0;
- (void)mapWithState:(id)a0;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (id)styleMatrix;

@end
