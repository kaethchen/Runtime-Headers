@interface PXTTRRadarObject : NSObject <NSCopying, PXTapToRadarDiagnosticProvider> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ radarDescription;
    void /* unknown type, empty encoding */ classification;
    void /* unknown type, empty encoding */ component;
    void /* unknown type, empty encoding */ diagnosticProviders;
    void /* unknown type, empty encoding */ additionalInfo;
    void /* unknown type, empty encoding */ preflightScreenshotURL;
    void /* unknown type, empty encoding */ metadataTags;
    void /* unknown type, empty encoding */ keywordIds;
    void /* unknown type, empty encoding */ attachmentImageURLs;
    void /* unknown type, empty encoding */ attachmentFileURLs;
    void /* unknown type, empty encoding */ additionalExtensionIdentifiers;
}

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;

@end
