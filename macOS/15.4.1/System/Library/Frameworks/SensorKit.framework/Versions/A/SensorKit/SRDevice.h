@class NSString;

@interface SRDevice : NSObject <NSSecureCoding, NSCopying> {
    NSString *_internalProductType;
}

@property (class, readonly) SRDevice *currentDevice;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceIdentifier;
@property long long deviceEnclosureMaterial;
@property (copy) NSString *buildVersion;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *systemName;
@property (readonly, copy) NSString *systemVersion;
@property (readonly, copy) NSString *productType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;
- (id)_productType;
- (id)initWithDeviceDetails:(id)a0;

@end
