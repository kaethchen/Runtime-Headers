@interface SLSBridgedWindowManagementOperationSpacerIndexesResult : SLSBridgedWindowManagementOperationResult

@property (readonly) unsigned long long verticalIndex;
@property (readonly) unsigned long long horizontalIndex;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVerticalIndex:(unsigned long long)a0 horizontalIndex:(unsigned long long)a1;

@end
