@class _PSSuggestion;

@interface _PSCNAutocompleteFeedbackTappedSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) _PSSuggestion *suggestion;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestion:(id)a0;

@end
