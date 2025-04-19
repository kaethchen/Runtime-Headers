@class NSData, NSDictionary;

@interface NSPersistentUIWindowInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_externalPublicProperties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int windowID;
@property (readonly, copy) NSData *recordEncryptionKey;
@property (readonly, getter=isGlobal) BOOL global;
@property int currentStatus;
@property unsigned int currentGeneration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithWindowID:(unsigned int)a0 recordEncryptionKey:(id)a1;
- (id)copyAllPublicProperties;
- (id)initWithWindowID:(unsigned int)a0;
- (void)setExternalPublicProperties:(id)a0;

@end
