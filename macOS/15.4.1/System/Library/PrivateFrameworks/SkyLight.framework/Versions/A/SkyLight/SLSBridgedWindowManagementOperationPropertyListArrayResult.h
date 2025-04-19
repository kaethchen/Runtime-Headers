@class NSArray;

@interface SLSBridgedWindowManagementOperationPropertyListArrayResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *propertyListArray;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyListArray:(id)a0;

@end
