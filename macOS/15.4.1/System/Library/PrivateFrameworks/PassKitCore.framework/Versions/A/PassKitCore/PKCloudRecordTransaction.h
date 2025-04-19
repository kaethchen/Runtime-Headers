@class PKPaymentTransaction;

@interface PKCloudRecordTransaction : PKCloudRecordObject

@property (retain, nonatomic) PKPaymentTransaction *transaction;

+ (BOOL)supportsSecureCoding;
+ (id)dateFormatter;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)item;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;

@end
