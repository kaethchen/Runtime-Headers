@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *groupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupIdentifiers:(id)a0;

@end
