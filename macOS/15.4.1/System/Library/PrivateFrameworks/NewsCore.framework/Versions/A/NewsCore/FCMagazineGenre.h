@class NSString;

@interface FCMagazineGenre : NSObject <NSCopying>

@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *localizedDescription;

+ (id)magazineGenreWithGenre:(id)a0 localizedDescription:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithGenre:(id)a0 localizedDescription:(id)a1;

@end
