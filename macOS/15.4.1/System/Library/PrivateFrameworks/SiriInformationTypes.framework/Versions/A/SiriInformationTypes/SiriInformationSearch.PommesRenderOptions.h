@interface SiriInformationSearch.PommesRenderOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isImmersiveExperience;
    void /* unknown type, empty encoding */ isSquawkResponse;
    void /* unknown type, empty encoding */ isPhoneCallActive;
    void /* unknown type, empty encoding */ switchProfile;
    void /* unknown type, empty encoding */ preserveResultSpaceIfPossible;
    void /* unknown type, empty encoding */ promptTypes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
