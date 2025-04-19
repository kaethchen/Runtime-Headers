@class NSString, NSDictionary, TCAttributedStringDigest, NSAttributedString;

@interface TCTextCompositionInput : NSObject <NSCopying, NSSecureCoding> {
    TCAttributedStringDigest *_digest;
    NSAttributedString *_digestedAttributedString;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *string;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } modifiedRange;
@property (readonly) unsigned long long offset;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } actualRange;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } contextRange;
@property (readonly, copy) NSDictionary *filteredOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)digest;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 error:(id *)a3;
- (id)digestedAttributedString;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 lookBack:(BOOL)a3 tagger:(id)a4 error:(id *)a5;
- (id)initWithDigestedAttributedString:(id)a0 modifiedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 offset:(unsigned long long)a2 filteredOptions:(id)a3;
- (id)initWithInput:(id)a0 additionalOptions:(id)a1;

@end
