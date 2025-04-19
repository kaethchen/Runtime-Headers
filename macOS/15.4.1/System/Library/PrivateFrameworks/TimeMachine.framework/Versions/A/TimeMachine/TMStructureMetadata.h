@class NSNumber, NSString, NSData;

@interface TMStructureMetadata : NSObject

@property (readonly, retain) NSNumber *version;
@property (readonly, retain) NSString *type;
@property (readonly, retain) NSString *uuid;
@property (readonly) NSData *dataRepresentation;

+ (id)metadataFromData:(id)a0 error:(id *)a1;
+ (id)metadataFromURL:(id)a0 error:(id *)a1;
+ (id)metadataWithType:(id)a0;

- (void).cxx_destruct;
- (id)stringValue;
- (id)initWithString:(id)a0 error:(id *)a1;
- (id)initWithVersion:(id)a0 uuid:(id)a1 type:(id)a2;

@end
