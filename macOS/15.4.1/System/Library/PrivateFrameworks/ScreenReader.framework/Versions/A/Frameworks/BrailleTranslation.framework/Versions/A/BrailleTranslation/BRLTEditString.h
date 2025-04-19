@class NSString, BRLTEditStringInternal;

@interface BRLTEditString : NSObject

@property (readonly) BRLTEditStringInternal *underlyingObject;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } focus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } suggestion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUnderlyingObject:(id)a0;
- (id)appending:(id)a0;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(long long)a3 suggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 textFormattingRanges:(id)a5;
- (long long)tokenForLocation:(long long)a0;

@end
