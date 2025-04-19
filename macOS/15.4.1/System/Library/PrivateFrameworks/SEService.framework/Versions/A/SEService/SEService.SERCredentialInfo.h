@interface SEService.SERCredentialInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ moduleAIDs;
    void /* unknown type, empty encoding */ packageAID;
    void /* unknown type, empty encoding */ containerSize;
    void /* unknown type, empty encoding */ requiredMemoryForCredential;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
