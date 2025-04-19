@class NSString, NSCountableTextLocation;

@interface NSCountableTextRange : NSTextRange

@property (class, readonly) NSCountableTextRange *documentRange;

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSCountableTextLocation *location;
@property (readonly) NSCountableTextLocation *endLocation;
@property (readonly, copy) NSString *type;
@property (readonly, getter=isEndingAtEOD) BOOL endingAtEOD;

+ (BOOL)isBaseClassTestingMode;
+ (void)setBaseClassTestingMode:(BOOL)a0;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEmpty;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containsLocation:(id)a0;
- (id)initWithLocation:(id)a0 endLocation:(id)a1;
- (BOOL)intersectsWithTextRange:(id)a0;
- (BOOL)isEqualToTextRange:(id)a0;
- (BOOL)isNotEmpty;
- (id)textRangeByIntersectingWithTextRange:(id)a0;
- (id)textRangeByFormingUnionWithTextRange:(id)a0;

@end
