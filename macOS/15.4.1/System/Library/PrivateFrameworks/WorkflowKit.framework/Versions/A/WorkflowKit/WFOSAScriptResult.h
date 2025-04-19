@class NSAttributedString, WFContentCollection;

@interface WFOSAScriptResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSAttributedString *compiledScript;
@property (readonly, nonatomic) NSAttributedString *resultString;
@property (readonly, nonatomic) WFContentCollection *resultCollection;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCompiledScript:(id)a0 resultString:(id)a1 result:(id)a2;
- (id)initWithCompiledScript:(id)a0 resultString:(id)a1 resultCollection:(id)a2;

@end
