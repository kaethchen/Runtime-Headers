@class NSString;

@interface TSCEStringValue : TSCEValue

@property (readonly, nonatomic) NSString *string;
@property (nonatomic) BOOL isRegex;
@property (nonatomic) BOOL isCaseSensitiveRegex;
@property (nonatomic) BOOL isLiteralString;

+ (id)stringValue:(id)a0;
+ (id)stringValue:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;
+ (id)stringValue:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1 isRegex:(BOOL)a2 isCaseSensitiveRegex:(BOOL)a3 isLiteralString:(BOOL)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)asString;
- (id)asStringWithLocale:(id)a0;
- (char)nativeType;
- (id)asDate:(id)a0;
- (BOOL)asBoolean:(id)a0;
- (BOOL)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (BOOL)asBooleanWithLocale:(id)a0;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asDateWithLocale:(id)a0;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asNumberWithLocale:(id)a0;
- (id)asNumberWithLocale:(id)a0 outError:(id *)a1;
- (id)asRawString;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asStringValue;
- (id)canonicalKeyStringForLocale:(id)a0;
- (char)deepType:(id)a0 outError:(id *)a1;
- (id)initWithString:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;
- (id)initWithString:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1 isRegex:(BOOL)a2 isCaseSensitiveRegex:(BOOL)a3 isLiteralString:(BOOL)a4;
- (BOOL)isCaseSensitiveRegexString;
- (BOOL)isRegexString;
- (BOOL)isStringValue;
- (struct TSCERichTextStorage { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; })rawRichTextStorage;

@end
