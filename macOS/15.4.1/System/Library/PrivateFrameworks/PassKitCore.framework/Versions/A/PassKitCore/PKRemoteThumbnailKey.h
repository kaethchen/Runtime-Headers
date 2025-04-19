@class NSString, NSDictionary;

@interface PKRemoteThumbnailKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSDictionary *requestDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToRemoteThumbnailKey:(id)a0;

@end
