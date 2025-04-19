@class NSString, TSARenderingExporter;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    TSARenderingExporter *mRenderingExporter;
    NSString *mPassphraseOpen;
    NSString *mPassphrasePrintCopy;
    BOOL mRequireOpenPassword;
    BOOL mRequireCopyPassword;
    BOOL mRequirePrintPassword;
    unsigned long long mRenderingQuality;
}

@property int taggingCondition;

- (void).cxx_destruct;
- (void)teardown;
- (void)setup;
- (double)viewScale;
- (void)setPassphrase:(id)a0 hint:(id)a1;
- (void)setCopyPassphrase:(id)a0 hint:(id)a1;
- (void)setPrintPassphrase:(id)a0 hint:(id)a1;
- (id)initWithRenderingExporter:(id)a0;
- (void)setRenderingQuality:(unsigned long long)a0;
- (BOOL)validatePassphrases:(id *)a0;
- (struct CGContext { } *)newCGContextForURL:(id)a0;
- (void)releaseCGContext:(struct CGContext { } *)a0;
- (unsigned long long)renderingQuality;
- (BOOL)supportsPaging;
- (BOOL)supportsRenderingQuality;

@end
