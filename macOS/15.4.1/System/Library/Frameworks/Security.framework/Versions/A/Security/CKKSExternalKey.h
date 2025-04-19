@class NSString, NSData;

@interface CKKSExternalKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *view;
@property (readonly) NSString *uuid;
@property (readonly) NSString *parentKeyUUID;
@property (readonly) NSData *keyData;

+ (id)parseFromJSONDict:(id)a0 error:(id *)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithView:(id)a0 uuid:(id)a1 parentTLKUUID:(id)a2 keyData:(id)a3;
- (id)jsonDictionary;

@end
