@class _LTLocalePair, NSUUID;

@interface _LTSELFLoggingTranslateAppContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long displayMode;
@property (readonly, copy, nonatomic) _LTLocalePair *localePair;
@property (readonly, nonatomic) BOOL isGenderAlternativeEnabled;
@property (readonly, nonatomic) long long tabName;
@property (readonly, copy, nonatomic) NSUUID *tabSessionId;
@property (readonly, nonatomic) long long conversationTabView;
@property (readonly, nonatomic) BOOL isPlayTranslationsEnabled;
@property (readonly, copy, nonatomic) NSUUID *autoTranslateSessionId;
@property (nonatomic) long long audioChannel;
@property (readonly, nonatomic) BOOL languageIdentificationEnabled;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayMode:(long long)a0 localePair:(id)a1 isGenderAlternativeEnabled:(BOOL)a2 tabName:(long long)a3 tabSessionId:(id)a4 conversationTabView:(long long)a5 isPlayTranslationsEnabled:(BOOL)a6 autoTranslateSessionId:(id)a7 audioChannel:(long long)a8 languageIdentificationEnabled:(BOOL)a9;

@end
