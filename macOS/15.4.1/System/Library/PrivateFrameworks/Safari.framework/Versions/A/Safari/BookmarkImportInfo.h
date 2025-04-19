@class NSString, NSDictionary;

@interface BookmarkImportInfo : NSObject

@property (readonly, nonatomic) unsigned long long importOrigin;
@property (readonly, copy, nonatomic) NSString *importOriginUUID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)_initWithImportOrigin:(unsigned long long)a0 originUUID:(id)a1;
- (id)initWithImportInfo:(id)a0;
- (id)initWithImportOrigin:(unsigned long long)a0 originUUID:(id)a1;

@end
