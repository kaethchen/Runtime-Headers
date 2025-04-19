@interface SLSBridgedWindowManagementOperationRegionResult : SLSBridgedWindowManagementOperationResult {
    struct CGSRegionObject { } *_region;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(struct CGSRegionObject { } *)a0;
- (struct CGSRegionObject { } *)copyRegion;

@end
