@interface IMKTextDocumentTraits : NSObject

@property (readonly, nonatomic) unsigned long long autoCapitalizationType;
@property (readonly, nonatomic, getter=isAutoPeriodEnabled) BOOL autoPeriodEnabled;
@property (readonly, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, nonatomic, getter=shouldSuppressCandidates) BOOL suppressCandidates;

- (id)description;
- (id)init;
- (id)initWithAutoCapitalizationType:(unsigned long long)a0 autoPeriodEnabled:(BOOL)a1 secureTextEntry:(BOOL)a2;
- (id)initWithAutoCapitalizationType:(unsigned long long)a0 autoPeriodEnabled:(BOOL)a1 secureTextEntry:(BOOL)a2 suppressCandidates:(BOOL)a3;

@end
