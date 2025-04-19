@class NSURL, NSString;

@interface ISVectorVariantResource : NSObject <ISVariantResourceProtocol>

@property (retain) NSURL *URL;
@property (readonly) struct CGPDFDocument { } *pdfDocument;
@property (readonly) NSString *variantName;
@property (readonly) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceWithURL:(id)a0 resourceInfo:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)imageForSize:(unsigned long long)a0 scale:(unsigned long long)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 variantName:(id)a1 flags:(unsigned long long)a2;

@end
