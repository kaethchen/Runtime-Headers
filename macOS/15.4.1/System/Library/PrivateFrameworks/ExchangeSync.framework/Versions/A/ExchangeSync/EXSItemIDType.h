@class NSString;

@interface EXSItemIDType : NSObject

@property (copy) NSString *itemID;
@property (copy) NSString *changeKey;

+ (id)initWithPropertiesDictionary:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)deriveJSONrepresentation;

@end
