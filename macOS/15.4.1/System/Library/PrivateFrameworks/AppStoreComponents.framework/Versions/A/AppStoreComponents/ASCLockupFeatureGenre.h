@class NSString, NSArray;

@interface ASCLockupFeatureGenre : NSObject <ASCLockupFeature>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *genreName;
@property (readonly, copy, nonatomic) NSString *genreID;
@property (readonly, copy, nonatomic) NSArray *subgenres;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGenreName:(id)a0 genreID:(id)a1 subgenres:(id)a2;

@end
