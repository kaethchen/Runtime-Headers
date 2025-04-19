@class NSString, NSArray;

@interface MADCaptionResult : MADResult

@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) BOOL containsUnsafeContent;
@property (readonly, nonatomic) BOOL isLowConfidence;
@property (readonly, nonatomic) NSArray *classificationIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCaption:(id)a0 score:(float)a1 containsUnsafeContent:(BOOL)a2 isLowConfidence:(BOOL)a3 classificationIdentifiers:(id)a4;

@end
