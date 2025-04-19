@class NSArray;

@interface CRKDownloadResourcesResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *resourceFileURLs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
