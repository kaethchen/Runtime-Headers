@class NSData, NSString;

@interface CRKFetchScreenshotResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *screenshotData;
@property (copy, nonatomic) NSString *studentIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
