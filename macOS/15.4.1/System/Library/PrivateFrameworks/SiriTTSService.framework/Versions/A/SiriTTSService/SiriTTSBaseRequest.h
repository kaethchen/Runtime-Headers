@class NSURL, NSString, NSUUID;

@interface SiriTTSBaseRequest : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ requestCreatedTime;
    void /* unknown type, empty encoding */ clientBundleId;
    void /* unknown type, empty encoding */ accessoryId;
    void /* unknown type, empty encoding */ outputPath;
    void /* unknown type, empty encoding */ sandboxToken;
    void /* unknown type, empty encoding */ logLinkId;
    void /* unknown type, empty encoding */ interactionLinkId;
    void /* unknown type, empty encoding */ didReportInstrument;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSURL *outputPath;
@property (nonatomic, copy) NSString *sandboxToken;
@property (nonatomic, copy) NSUUID *logLinkId;
@property (nonatomic, copy) NSUUID *interactionLinkId;
@property (nonatomic, copy) id /* block */ didReportInstrument;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
