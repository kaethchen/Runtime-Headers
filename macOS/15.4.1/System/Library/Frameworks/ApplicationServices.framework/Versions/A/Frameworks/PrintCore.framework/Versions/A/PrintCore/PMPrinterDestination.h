@class NSURL, NSString, NSData;

@interface PMPrinterDestination : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *URL;
@property (copy) NSString *displayName;
@property (copy) NSData *txtRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithURL:(id)a0;
- (id)dictionaryRepresentation;
- (id)_create_txt_from_attrs:(struct _ipp_s { } *)a0;
- (struct _ipp_s { } *)_exprinter_getAttributes0:(const char **)a0 count:(int)a1;
- (void)_exprinter_getAttributes:(const char **)a0 count:(int)a1 completionHandler:(id /* block */)a2;
- (void)_query_and_resolve_forContext:(id)a0 completionHandler:(id /* block */)a1;

@end
