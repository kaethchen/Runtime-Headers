@class NSArray;

@interface SLSBridgedWindowManagementOperationNumbersResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *numbers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumbers:(id)a0;

@end
