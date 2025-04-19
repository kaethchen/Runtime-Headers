@class NSString;

@interface FSTaskOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL hasValue;
@property (readonly, retain) NSString *option;
@property (readonly, retain) NSString *optionValue;

+ (id)option:(id)a0 value:(id)a1;
+ (id)optionWithoutValue:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOption:(id)a0;
- (id)initWithOption:(id)a0 value:(id)a1;
- (id)initWithOption:(id)a0 value:(id)a1 hasValue:(BOOL)a2;
- (id)originalArgv;

@end
