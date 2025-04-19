@class NSString;

@interface EXSAttachmentIDType : EXSItemIDType

@property (copy) NSString *requestKeyID;

+ (id)initWithPropertiesDictionary:(id)a0;

- (void).cxx_destruct;
- (id)deriveJSONrepresentation;

@end
