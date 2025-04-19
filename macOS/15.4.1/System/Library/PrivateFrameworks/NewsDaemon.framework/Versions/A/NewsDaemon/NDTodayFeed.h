@class NSData, NSDate, FCContentManifest, FCContentArchive;

@interface NDTodayFeed : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *configData;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) FCContentManifest *contentManifest;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfigData:(id)a0 publishDate:(id)a1 contentManifest:(id)a2 contentArchive:(id)a3;

@end
