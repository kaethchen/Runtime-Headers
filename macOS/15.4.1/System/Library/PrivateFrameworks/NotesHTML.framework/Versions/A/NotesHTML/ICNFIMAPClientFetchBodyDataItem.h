@class NSString;

@interface ICNFIMAPClientFetchBodyDataItem : ICNFIMAPClientFetchDataItem

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } dataRange;
@property (readonly) long long textSectionSpecifier;
@property (readonly) BOOL isHeader;
@property (readonly, copy) NSString *partSectionSpecifier;

+ (id)newSectionSpecifierFromPart:(id)a0 text:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_finalizeCommandStringWithHeaderFieldNames:(id)a0 peek:(BOOL)a1;
- (id)initWithHeaderFieldNames:(id)a0;
- (id)initWithPartSectionSpecifier:(id)a0 textSectionSpecifier:(long long)a1 dataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithPartSectionSpecifier:(id)a0 textSectionSpecifier:(long long)a1 peek:(BOOL)a2 headerFieldNames:(id)a3 dataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
