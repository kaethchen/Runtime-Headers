@class NSData;

@interface Sage.CompletePromptResponseElementXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _event;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_event;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
