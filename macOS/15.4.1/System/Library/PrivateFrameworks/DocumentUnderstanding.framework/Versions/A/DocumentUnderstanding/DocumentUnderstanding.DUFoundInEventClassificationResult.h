@interface DocumentUnderstanding.DUFoundInEventClassificationResult : NSObject <NSCoding, NSCopying>

@property (nonatomic, retain) void /* unknown type, empty encoding */ isSupportedLocale;
@property (nonatomic, retain) void /* unknown type, empty encoding */ isHumanSender;
@property (nonatomic, retain) void /* unknown type, empty encoding */ isHumanHeaders;
@property (nonatomic, retain) void /* unknown type, empty encoding */ containsDataDetectors;
@property (nonatomic, retain) void /* unknown type, empty encoding */ isClassifiedAsEvent;
@property (nonatomic, retain) void /* unknown type, empty encoding */ textLengthPass;
@property (nonatomic, retain) void /* unknown type, empty encoding */ isEventCandidate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ isForwardedMail;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serializedData;

@end
