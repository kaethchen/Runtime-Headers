@class NSString;

@interface WebPDFRepresentation : NSObject <WebDocumentRepresentation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)PDFDocumentClass;
+ (id)supportedMIMETypes;

- (id)title;
- (void)setDataSource:(id)a0;
- (BOOL)canProvideDocumentSource;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)a0;
- (void)receivedData:(id)a0 withDataSource:(id)a1;
- (void)receivedError:(id)a0 withDataSource:(id)a1;

@end
