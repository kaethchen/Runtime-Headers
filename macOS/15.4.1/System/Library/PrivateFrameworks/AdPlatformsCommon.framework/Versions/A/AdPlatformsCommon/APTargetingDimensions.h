@class NSArray;

@interface APTargetingDimensions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *inclusionCriteria;
@property (retain) NSArray *exclusionCriteria;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
