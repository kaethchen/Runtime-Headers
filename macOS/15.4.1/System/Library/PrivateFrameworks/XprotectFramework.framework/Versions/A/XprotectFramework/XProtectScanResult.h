@class NSString, YARARule, NSURL, NSDate, NSNumber, NSArray;

@interface XProtectScanResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *fileURL;
@property int assessmentResult;
@property (retain) NSNumber *signatureVersion;
@property (retain) NSString *signatureName;
@property (retain) NSDate *scanTime;
@property (retain) YARARule *matchedRule;
@property (retain) NSArray *errors;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileURL:(id)a0 assessmentResult:(int)a1 signatureVersion:(id)a2 signatureName:(id)a3 scanTime:(id)a4;

@end
