@class NSString;

@interface TPSLinkedDocument : TPSSerializableObject {
    void /* unknown type, empty encoding */ bundleId;
    void /* unknown type, empty encoding */ documentId;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ product;
    void /* unknown type, empty encoding */ productVersion;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *documentId;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *product;
@property (nonatomic, copy) NSString *productVersion;

+ (id)linkedDocumentFromDictionary:(id)a0;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
