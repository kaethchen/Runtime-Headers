@class PKPeerPaymentCounterpartImageData;

@interface PKCloudRecordCounterpartImageData : PKCloudRecordObject

@property (retain, nonatomic) PKPeerPaymentCounterpartImageData *counterpartImageData;

+ (BOOL)supportsSecureCoding;

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
