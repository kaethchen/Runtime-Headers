@class NSArray, NSDictionary, NSString;

@interface PKRequiredCLDevice : NSObject {
    struct _cl_device_id { } *_device;
    NSArray *_extensions;
    NSDictionary *_symbolTable;
}

@property (readonly) double version;
@property (readonly, retain) NSArray *extensions;
@property (readonly, retain) NSDictionary *limits;
@property (readonly, retain) NSString *vendorName;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (id)_objectValueForParameter:(unsigned int)a0;
- (id)initWithDevice:(struct _cl_device_id { } *)a0 symbols:(id)a1;

@end
