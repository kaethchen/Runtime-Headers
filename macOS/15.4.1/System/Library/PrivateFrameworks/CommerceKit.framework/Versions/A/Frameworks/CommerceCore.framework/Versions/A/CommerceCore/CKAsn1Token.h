@class NSData;

@interface CKAsn1Token : NSObject

@property (readonly) unsigned char tokenClass;
@property (readonly) unsigned long long identifier;
@property (readonly) NSData *data;

+ (id)readTokenFromBuffer:(id)a0 length:(unsigned long long *)a1;
+ (id)readTokenFromBuffer:(id)a0 opaque:(BOOL)a1 length:(unsigned long long *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)_initSuperWithID:(unsigned long long)a0 class:(unsigned char)a1 data:(id)a2 opaque:(BOOL)a3;

@end
