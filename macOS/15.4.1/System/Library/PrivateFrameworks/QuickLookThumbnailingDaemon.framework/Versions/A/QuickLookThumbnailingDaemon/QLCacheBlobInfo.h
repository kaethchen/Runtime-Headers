@interface QLCacheBlobInfo : NSObject

@property unsigned long long location;
@property unsigned long long length;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
