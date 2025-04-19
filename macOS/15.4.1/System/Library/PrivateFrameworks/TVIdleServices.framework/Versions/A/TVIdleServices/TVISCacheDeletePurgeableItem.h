@class NSURL, NSDate;

@interface TVISCacheDeletePurgeableItem : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSDate *dateCreated;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWithURL:(id)a0 size:(unsigned long long)a1 dateCreated:(id)a2;

@end
