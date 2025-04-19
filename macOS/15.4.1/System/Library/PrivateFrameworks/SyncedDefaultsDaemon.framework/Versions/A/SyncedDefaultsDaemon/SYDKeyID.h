@class NSString;

@interface SYDKeyID : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ storeIdentifier;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *storeIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 storeIdentifier:(id)a1;

@end
