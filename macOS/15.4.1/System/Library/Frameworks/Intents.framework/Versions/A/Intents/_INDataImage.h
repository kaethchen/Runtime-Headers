@class NSData, NSUUID;

@interface _INDataImage : INImage {
    NSUUID *_sha256HashUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hashLock;
}

@property (readonly, copy, nonatomic) NSData *imageData;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithImageData:(id)a0;
- (void)_setImageData:(id)a0;
- (id)_sha256HashUUID;
- (id)_copyWithSubclass:(Class)a0;
- (id)_imageData;
- (BOOL)_isEligibleForProxying;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)_requiresRetrieval;
- (void)_retrieveImageDataWithReply:(id /* block */)a0;

@end
