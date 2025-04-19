@class NSString;

@interface SLVirtualDisplayConfiguration : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long subtype;
@property (nonatomic) NSString *uti;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long vendorID;
@property (readonly, nonatomic) unsigned long long productID;
@property (readonly, nonatomic) unsigned long long serialNumber;
@property (readonly, nonatomic) struct { float width; float height; } sizeInMillimeters;
@property (readonly, nonatomic) struct { unsigned int width; unsigned int height; } maximumSizeInPixels;
@property (readonly, nonatomic) struct { struct { float x; float y; } red; struct { float x; float y; } green; struct { float x; float y; } blue; struct { float x; float y; } white; } chromaticities;

+ (id)configurationWithBackendOptions:(id)a0;
+ (id)configurationWithDictionaryRepresentation:(id)a0;
+ (id)configurationWithDisplayInfo:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithName:(id)a0 vendorID:(unsigned long long)a1 productID:(unsigned long long)a2 serialNumber:(unsigned long long)a3 sizeInMillimeters:(struct { float x0; float x1; })a4 maximumSizeInPixels:(struct { unsigned int x0; unsigned int x1; })a5 chromaticities:(struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; })a6 error:(id *)a7;

@end
