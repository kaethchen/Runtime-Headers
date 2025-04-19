@class NSArray, NSUUID, NSLocale;

@interface _LTPreflightConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long nextStep;
@property (readonly, nonatomic) NSArray *supportedLocales;
@property (readonly, nonatomic) NSArray *supportedLocalePairs;
@property (readonly, copy, nonatomic) NSArray *sourceStrings;
@property (copy, nonatomic) NSLocale *systemLocale;
@property (copy, nonatomic) NSLocale *requestedSourceLocale;
@property (copy, nonatomic) NSLocale *requestedTargetLocale;
@property (copy, nonatomic) NSLocale *resolvedSourceLocale;
@property (copy, nonatomic) NSLocale *resolvedTargetLocale;
@property (readonly, copy, nonatomic) NSLocale *effectiveSourceLocale;
@property (readonly, copy, nonatomic) NSLocale *effectiveTargetLocale;
@property (copy, nonatomic) NSArray *lowConfidenceLocales;
@property (copy, nonatomic) NSLocale *lidUnsupportedLocale;
@property (nonatomic) BOOL isForDownloadApprovalOnly;
@property (nonatomic) BOOL deviceSupportsTranslation;
@property (copy, nonatomic) NSUUID *selfLoggingID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSession:(id)a0 request:(id)a1 supportedLocalePairs:(id)a2;
- (id)initWithSourceStrings:(id)a0 supportedLocalePairs:(id)a1;

@end
