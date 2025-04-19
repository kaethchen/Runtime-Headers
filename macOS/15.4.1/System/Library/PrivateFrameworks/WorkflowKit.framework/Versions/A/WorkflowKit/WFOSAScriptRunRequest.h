@class NSString, NSAppleEventDescriptor;

@interface WFOSAScriptRunRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *script;
@property (readonly, nonatomic) NSString *languageName;
@property (readonly, nonatomic) NSAppleEventDescriptor *inputEvent;

+ (void)createRunRequestWithScript:(id)a0 languageName:(id)a1 input:(id)a2 ignoresInput:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (id)inputAppleEventWithConvertedInputDescriptor:(id)a0 forScript:(id)a1 ignoresInput:(BOOL)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScript:(id)a0 languageName:(id)a1 inputEvent:(id)a2;

@end
