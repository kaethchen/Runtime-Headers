@class NSString;

@interface BRLTJEditableStringInternal : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ string;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ focus;
    void /* unknown type, empty encoding */ suggestion;
    void /* unknown type, empty encoding */ tokenRanges;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSelection;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSFocus;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSuggestion;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)append:(id)a0;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 token:(long long)a3 suggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (long long)tokenForLocation:(long long)a0;

@end
