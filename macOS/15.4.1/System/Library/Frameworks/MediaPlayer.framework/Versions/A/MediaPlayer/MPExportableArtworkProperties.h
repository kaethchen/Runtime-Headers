@class NSString, NSArray, ICStoreArtworkInfo;

@interface MPExportableArtworkProperties : NSObject

@property (readonly, nonatomic) ICStoreArtworkInfo *artworkInfo;
@property (copy, nonatomic) NSString *resolvedURLString;
@property (copy, nonatomic) NSArray *artworkTemplateItems;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) long long mediaLibraryArtworkType;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) id jsonRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONRepresentation:(id)a0;

@end
