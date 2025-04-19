@class NSUUID, NSArray, NSLocale;

@interface _LTSELFLoggingTranslationLIDData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *invocationId;
@property (nonatomic) long long inputSource;
@property (retain, nonatomic) NSLocale *topLocale;
@property (retain, nonatomic) NSArray *lowConfidenceLocales;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInvocationId:(id)a0 inputSource:(long long)a1 topLocale:(id)a2 lowConfidenceLocales:(id)a3;

@end
