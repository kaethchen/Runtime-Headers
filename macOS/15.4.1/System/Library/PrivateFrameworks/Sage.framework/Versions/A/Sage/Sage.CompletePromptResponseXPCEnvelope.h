@class NSData;

@interface Sage.CompletePromptResponseXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _completion;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_completion;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
