@class NSString;

@interface SiriInformationSearch.ClientAudioResult : SiriInformationSearch.PommesResult {
    void /* unknown type, empty encoding */ vocabularyResult;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
