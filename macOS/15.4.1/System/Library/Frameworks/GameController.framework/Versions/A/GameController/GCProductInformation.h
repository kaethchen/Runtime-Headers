@class NSString, NSNumber, NSDictionary;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *productCategory;
@property (copy, nonatomic) NSString *detailedProductCategory;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *anonymizedIdentifier;
@property (copy, nonatomic, getter=isAttachedToDevice) NSNumber *attachedToDevice;
@property (copy, nonatomic) NSDictionary *miscellaneous;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)setController:(id)a0;

@end
