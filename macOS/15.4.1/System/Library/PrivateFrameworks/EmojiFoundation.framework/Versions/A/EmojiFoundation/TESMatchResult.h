@class NSString;

@interface TESMatchResult : NSObject

@property (retain, nonatomic) NSString *matcherClass;
@property (nonatomic) long long effectType;
@property (nonatomic) long long matchType;
@property (nonatomic) unsigned long long suggestionBehavior;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchRange;
@property (weak, nonatomic) NSString *sourceString;
@property (readonly, nonatomic) NSString *matchingSubString;

+ (id)resultWithMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 effectType:(long long)a1 matchType:(long long)a2 sourceString:(id)a3;

- (id)debugDescription;
- (void).cxx_destruct;

@end
