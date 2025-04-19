@class NSString;

@interface PLPhotoLibraryPathManagerIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned char bundleFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0;
- (BOOL)isEqualToPathManagerIdentifier:(id)a0;
- (id)initWithLibraryID:(id)a0 libraryFormat:(unsigned char)a1;

@end
