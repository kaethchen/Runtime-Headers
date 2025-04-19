@class NSURL, NSURLSessionConfiguration;

@interface OspreyConnectionConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *connectionUrl;
@property (retain, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
