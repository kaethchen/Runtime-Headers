@class NSString, NSArray;

@interface TCTextCompositionAssistantWritingOptions : NSObject <NSCopying>

@property (readonly) unsigned long long token;
@property (readonly) unsigned long long processIdentifier;
@property (readonly) unsigned long long appProcessIdentifier;
@property (readonly, copy) NSString *requestIdentifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *rewritingType;
@property (readonly, copy) NSString *userPreferredLanguage;
@property (readonly) BOOL smartQuotesEnabled;
@property (readonly) BOOL smartDashesEnabled;
@property (readonly, copy) NSArray *userQuotesArray;
@property (readonly) unsigned long long seed;
@property (readonly) unsigned long long draftSteps;
@property (readonly) unsigned long long outputFormatOptions;
@property (readonly) unsigned long long regionPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
