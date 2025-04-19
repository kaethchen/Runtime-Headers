@interface BKAssetMetadataInspector : NSObject

+ (id)_contentKeySessionDelegateQueue;
+ (id)_audiobook_metadataForAssetAtURL:(id)a0 preloadedMetadata:(id)a1 includeCover:(BOOL)a2 includeChapterTimes:(BOOL)a3 iTunesMetadata:(id)a4 error:(id *)a5;
+ (id)_eBook_metadataForAssetAtURL:(id)a0 preloadedMetadata:(id)a1 includeCover:(BOOL)a2 error:(id *)a3;
+ (id)_metadataForAssetAtURL:(id)a0 includeCover:(BOOL)a1 includeChapterTimes:(BOOL)a2 iTunesMetadata:(id)a3 error:(id *)a4;
+ (struct CGImage { } *)_new_pdf_coverImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGImage { } *)_new_pdf_imageFromPDFPage:(struct CGPDFPage { } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)_pdfDocumentAttributes:(struct CGPDFDocument { } *)a0;
+ (BOOL)_pdfDocumentIsUnlocked:(struct CGPDFDocument { } *)a0;
+ (unsigned long long)_pdfDocumentPageCount:(struct CGPDFDocument { } *)a0;
+ (id)_pdf_metadataForAssetAtURL:(id)a0 preloadedMetadata:(id)a1 includeCover:(BOOL)a2 error:(id *)a3;
+ (id)_typeSpecificMetadtaForAssetAtURL:(id)a0 includeCover:(BOOL)a1 includeChapterTimes:(BOOL)a2 iTunesMetadata:(id)a3 error:(id *)a4;
+ (id)_xAttrMetadataForAssetAtURL:(id)a0 error:(id *)a1;
+ (id)coverImageDataForAssetAtURL:(id)a0 error:(id *)a1;
+ (id)iTunesMetadataForBookAssetAtURL:(id)a0 error:(id *)a1;
+ (id)immediatelyAvailableMetadataForAssetAtURL:(id)a0 error:(id *)a1;
+ (id)metadataForAssetAtURL:(id)a0 error:(id *)a1;
+ (id)metadataForAssetAtURL:(id)a0 iTunesMetadata:(id)a1 error:(id *)a2;
+ (id)metadataForAssetAtURL:(id)a0 includeCover:(BOOL)a1 error:(id *)a2;
+ (id)metadataForAssetAtURL:(id)a0 includeCover:(BOOL)a1 includeChapterTimes:(BOOL)a2 error:(id *)a3;

@end
