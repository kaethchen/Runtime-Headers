@interface E5RunnerLastForwardLogits : NSObject <E5RunnerLogitsProtocol> {
    struct Logits { unsigned long long numTokens; struct Span<_Float16, 18446744073709551615UL> { void /* unknown type, blank encoding */ *m_ptr; struct SpanSize<18446744073709551615UL> { unsigned long long m_size; } m_size; } logitsSpan; long long stridePerLogit; long long stridePerToken; unsigned long long numLogitsPerToken; } _logits;
}

@property (readonly, nonatomic) long long numTokens;
@property (readonly, nonatomic) void /* unknown type, blank encoding */ *logitData;
@property (readonly, nonatomic) long long stridePerLogit;
@property (readonly, nonatomic) long long stridePerToken;
@property (readonly, nonatomic) long long numLogitsPerToken;

- (id).cxx_construct;
- (id)initWithLogits:(struct Logits { unsigned long long x0; struct Span<_Float16, 18446744073709551615UL> { void /* unknown type, blank encoding */ *x0; struct SpanSize<18446744073709551615UL> { unsigned long long x0; } x1; } x1; long long x2; long long x3; unsigned long long x4; })a0;

@end
