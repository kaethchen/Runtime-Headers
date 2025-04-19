@class NSString, NSRegularExpression;

@interface TESPatternMatcherBase : NSObject <TESPatternMatching>

@property (retain, nonatomic) NSString *pattern;
@property (retain, nonatomic) NSRegularExpression *regularExpression;
@property (nonatomic) long long effectType;
@property (nonatomic) long long matchType;
@property (nonatomic) BOOL matchMustBeWordOrSentenceTerminal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)configurePrecompiledRegularExpression;
- (id)createMatchResultForMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sourceString:(id)a1;
- (id)matchesForString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
