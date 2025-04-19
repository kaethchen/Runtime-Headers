@class NSData;

@interface ICEncryptedData : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSData *tag;
@property (readonly, copy, nonatomic) NSData *initializationVector;
@property (readonly, copy, nonatomic) NSData *fallbackTag;
@property (readonly, copy, nonatomic) NSData *fallbackInitializationVector;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 tag:(id)a1 initializationVector:(id)a2;
- (id)initWithData:(id)a0 tag:(id)a1 initializationVector:(id)a2 fallbackTag:(id)a3 fallbackInitializationVector:(id)a4;

@end
