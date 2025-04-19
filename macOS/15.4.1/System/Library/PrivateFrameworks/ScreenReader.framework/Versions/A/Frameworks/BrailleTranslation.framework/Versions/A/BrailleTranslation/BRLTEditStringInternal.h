@class NSString;

@interface BRLTEditStringInternal : NSObject {
    void /* unknown type, empty encoding */ string;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ focus;
    void /* unknown type, empty encoding */ tokenRanges;
    void /* unknown type, empty encoding */ suggestion;
    void /* unknown type, empty encoding */ textFormattingRanges;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSelection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSFocus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSuggestion;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)appending:(id)a0;
- (id)initWithString:(id)a0 NSSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 NSFocus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(long long)a3 NSSuggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 textFormattingRanges:(id)a5;
- (long long)tokenForLocation:(long long)a0;

@end
