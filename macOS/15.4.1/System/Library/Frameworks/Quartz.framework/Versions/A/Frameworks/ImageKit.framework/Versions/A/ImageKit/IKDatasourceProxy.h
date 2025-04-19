@class NSString;

@interface IKDatasourceProxy : NSObject <IKImageProxy> {
    struct __CFDictionary { } *_quicklookOptions;
}

@property (retain) NSString *representationType;
@property (retain) NSString *uti;
@property (retain) id representation;
@property struct __CFDictionary { } *quicklookOptions;
@property (retain) id proxySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)datasourceProxy;
+ (id)_noQuickLookFallbackImageWithRepresentation:(id)a0 source:(id)a1;
+ (id)_proxyImageWithType:(id)a0 representation:(id)a1 source:(id)a2;
+ (id)_thumbnailWithRepresentation:(id)a0 type:(id)a1 uti:(id)a2 quickLookOptions:(id)a3 proxySource:(id)a4 size:(double)a5 antialiased:(BOOL)a6 quality:(int)a7;
+ (BOOL)representationTypeSupportsConcurrentLoading:(id)a0;

- (void)dealloc;
- (void)finalize;
- (int)proxyDataFormat;
- (BOOL)isVectorial;
- (id)proxyData;
- (id)proxyImage;
- (id)proxyReferenceInstance;
- (struct CGSize { double x0; double x1; })proxySize;
- (BOOL)supportConcurrentLoading;
- (id)thumbnailWithSize:(double)a0 antialiased:(BOOL)a1 quality:(int)a2;

@end
