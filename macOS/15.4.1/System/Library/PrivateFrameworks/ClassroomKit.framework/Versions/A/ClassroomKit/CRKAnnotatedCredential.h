@class NSDictionary;
@protocol CRKKeychainItem;

@interface CRKAnnotatedCredential : NSObject

@property (readonly, nonatomic) id<CRKKeychainItem> credential;
@property (readonly, copy, nonatomic) NSDictionary *annotation;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 annotation:(id)a1;

@end
