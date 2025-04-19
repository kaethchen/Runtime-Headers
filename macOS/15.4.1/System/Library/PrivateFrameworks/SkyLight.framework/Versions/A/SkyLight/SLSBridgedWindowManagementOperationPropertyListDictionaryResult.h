@class NSDictionary;

@interface SLSBridgedWindowManagementOperationPropertyListDictionaryResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSDictionary *propertyListDictionary;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyListDictionary:(id)a0;

@end
